# Exact-tree six-declaration CI gate: extern linkage correction (2026-11-02)

Starting `main`: `9df94c52db0e34528eef1eea20b706596f3d42e7`.

The full C++17 workflow [run 41419327229](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41419327229) failed before the compiler sweep at `scripts/verify_cpp_20261102_six_source_matched.py`. The verifier required `void FUN_...` at the start of each declaration, but all six canonical caller files contain `extern void FUN_...`. The first failure was `0x00105af0: exact declaration block missing/duplicated`.

The six caller source preimages and original body digest labels were checked against the verifier's pinned SHA-256 values after removing the **actual** `extern` declaration block. All six preimages matched; all four distinct callee draft files also matched their pinned SHA-256 values and nullary `void` draft signatures. The six original-address source files, function bodies, call expressions, and original x86 body digest labels remain unchanged.

This repair changes **only the verifier's six expected declaration spellings** from `void` to `extern void`, matching the committed source. It does not infer original Xbox external linkage or calling conventions: `ABI_UNVERIFIED` remains in force. The retail XBE bytes were not available for fresh instruction authentication. Strict C++17 host syntax, Xbox ABI fidelity, and native PC linkage remain distinct gates.

The prior workflow did not reach the full exact-tree sweep, so it did **not** produce a new measured syntax delta. A subsequent completed exact-tree audit must establish the current syntax percentage; do not update README progress based on this gate repair alone.
