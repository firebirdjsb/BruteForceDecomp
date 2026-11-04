# 250 bounded operand repairs

This batch corrects 483 original DWORD address values across 250 drafts.
**29 files pass complete isolated strict C++17 checks; 221 remain partial
repairs with other compiler errors.** Partial repairs receive no syntax-pass,
ABI, behavior or native-linkage credit.

Each address expression is replaced by its exact original guest32 immediate,
authenticated against the fixed original XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete original body hashes, decoded C7 DWORD-store boundaries and values
are recorded. The 29 complete repairs also add only exact existing callee-source
declarations, with original direct E8 destinations authenticated. No call
arguments, register variables, return statements, storage widths or other
instructions are reconstructed by these edits.

The [manifest](../../metadata/cpp_20261101_literal_declarations.json) preserves
canonical source preimage SHA-256/Git blobs and resulting hashes. Reversing the
literal substitutions and removing the added declaration/comment block restores
every complete source preimage. Three newly declared callees also receive partial
literal repairs in this same batch; dependency hashes explicitly refer to their
recorded preimages, while their resulting fingerprints remain separately pinned.
Their source signatures and original body hashes are unchanged.

Run `python tools/verify_cpp_literal_declaration_batch.py`. The gate requires
Clang++17 at O0/O2 with uncapped errors and pointer-truncation errors enabled.
Every complete case must pass; every partial case must still fail with a strict
subset of its previous diagnostic-message multiset, losing exactly its proved
address errors and introducing no warnings. Locally, the 221 partial files move
from 1,209 errors to 774: **435 removed**, all remaining errors retained explicitly.
Preimage restoration and changed-literal negative controls run for every file.
Existing unknown register inputs can become visible as warnings when a complete
file's earlier hard errors are repaired; those inputs remain unresolved.

Add `--xbe <private-image> --tooldeps <capstone-directory>` to authenticate full
original bodies and instruction boundaries. Public CI has no private executable
and reports the absent authenticity recheck. No binary, assets, complete dump or
private paths are committed. Original addresses and inventory ABI/behavior fields
are preserved. x87/SSE, SEH, indirect dispatch and dynamic register contracts
remain separate work; the batch claims bounded operand/source-type facts only.

The latest published complete audit before this batch measures 3,780 passes and
9,914 failures (27.60%) at `c3866ecd971344500f532475efdc1f040a4148d8`.
New coverage requires the final exact-tree audit. Full Xbox behavior and native
PC linkage remain unverified independently of syntax. Only source/evidence and
CI are published; no live game, installation or saves are touched. Revert the
scoped batch commits for rollback.
