#!/bin/bash
EXE="${1:-bin/syntax_analyzer}"
TESTDIR="${2:-test}"
OUTDIR="output"

if [ ! -x "$EXE" ]; then
    echo "Executable not found or not executable: $EXE"
    echo "Build it first with: make"
    exit 1
fi
mkdir -p "$OUTDIR"
shopt -s nullglob
files=("$TESTDIR"/*)
if [ ${#files[@]} -eq 0 ]; then echo "No test files found in $TESTDIR"; exit 1; fi
for f in "${files[@]}"; do
    case "$f" in
        *.c|*.cc|*.cpp|*.cxx) ;;
        *) continue ;;
    esac
    name=$(basename "$f")
    echo "Processing: $name"
    "$EXE" "$f" "$OUTDIR/${name}.out" || true
done
echo "All test outputs saved in: $OUTDIR/"
