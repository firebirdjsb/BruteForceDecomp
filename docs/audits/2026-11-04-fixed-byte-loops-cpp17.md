# Fixed-byte loop checkpoint

The complete exact-tree audit at `08bc2a104d38cd5e678da11e2ba07cf8c3de2e2a` checks 13,694 canonical sources: **4,004 pass (29.2391%)**, 9,690 fail, zero provenance errors and zero check errors. Exactly 001cf0f0 and 001cf1d0 improve relative to the 4,002 checkpoint; no regressions or original-body-hash changes occur. This is +59 over the initial 3,945 baseline.

Report SHA-256: `c770196bfd9cb51fd7fd3416eee7fb37d6015a491ff10a966cf9584771b50916`.

Each repair replaces pointer-to-int intermediates in one byte-copy statement with unsigned-character views at the same fixed displacement. The independently checked 47/65-byte bodies retain every copy width, operation order, fixed source pointer, destination stride, branch and untouched padding byte. Canonical signatures and unresolved ECX locals are unchanged.

The integrated gate passes strict O0/O2 original-negative and replacement-positive checks, selected private body replay, 87,600 initialized overlap/padding cases per O0/O2 and GCC ASan+UBSan build, and ten executable offset/stride/order/source-advance/width negatives. An independent harness passes 163,968 cases per configuration at Clang O0/O2, GCC O3 strict aliasing and GCC ASan+UBSan. Seventeen private-evidence corruption variants are rejected, including listed/parsed instruction lengths. The frozen nine-file package received independent review; historical fixtures are preserved byte-for-byte.

Repository safety, C++-only policy and all 22 historical lane invariants pass. The changed function IDs occur in no older source/caller gate or repair manifest. The previous 4,002 checkpoint's broad tools run covered 342 tests with fourteen baseline failing subchecks, one baseline error and fifteen optional skips; that broad run is not claimed as rerun for this two-statement batch. This batch runs its focused gate, private replay, sanitizers and complete source audit.

Tests require live aligned native uint32_t storage, valid array extents, whole-stride endpoints and no address wrapping. Canonical unresolved-register functions and original machine code are never executed; only explicit test-only ECX seams are run. This is not guest32 mapping, register/stack ABI, whole-function runtime or whole-game equivalence. Whole-XBE authentication remains unverified. The variable-displacement candidate 0034c50e remains held rather than claiming native pointer arithmetic proves guest32 wrapping. See the detailed evidence document and manifest for the full bounded contract.
