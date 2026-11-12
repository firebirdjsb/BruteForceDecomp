# Additive CI suggestion

Keep every existing workflow step. After independently reviewed installation,
add a bounded operation step on the existing GNU/Clang x86-64 Linux runner:

    python tools/test_cpp_002b7360_subtracted_three_term_operation.py --repo .

Use the runner's reviewed Clang setup. The ordinary step regenerates and
hash-checks all three corpora, runs Clang O0/O2 checks and mutation gates. No private
program record, original executable, uploaded script, external game data or
network access is required. Do not add private evidence to the repository.

If GCC 14 is installed in that runner, a separate optional step may add
--sanitizers. This uses g++-14 ASan+UBSan with leak detection disabled. It does
not replace Clang tests or the full canonical C++17 audit. Do not rename or
remove existing gates and do not claim Clang sanitizer/LeakSanitizer coverage.

This is a suggestion only; the proposal does not edit workflow files.
