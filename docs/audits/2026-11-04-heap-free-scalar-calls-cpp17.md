# Five evidenced scalar heap-call boundaries

This batch adds the existing guest32 heap-free header to `0008dcf0`, `000c0040`, `0023cca0`, `002ea08b` and `002ea0ca`. The first three raw E8 targets are `002ea018`, represented by the existing `thunk_FUN_00237ec0`. The last two target `00067bf0` directly and now name the existing distinct `thunk_FUN_00067bf0` wrapper. No new prototype, register value, pointer conversion, native heap implementation or runtime adapter is introduced.

Five stored CALL_RETURN flow overrides are not accepted as control-flow evidence. Separately hashed adjacent program-memory contexts establish actual cleanup and continuation through RET: ADD ESP,4 at three sites and POP ECX at two. These contexts do not expand the historical recorded body ranges or their hashes. The candidate `002e9c30` is deliberately excluded because its actual continuation contains stores missing from its draft.

Nine focused scalar tests and six ledger-admission tests pass. Exact source reversal, complete O0/O2 syntax/object builds, original undeclared-call negatives, historical literal negatives, 184 byte/binding mutations, 500,395 initialized synthetic DWORD transfers per optimization and thirty wrong-transfer negative runs are checked. Optional bounded private replay validates eleven selected body hashes and five contexts, with independent Capstone boundaries. No canonical function, original machine-code stream or guest heap action is executed.

Both unchanged historical ledgers retain all preimages and corruption controls. The 250-case ledger reports 46 complete/204 partial/483 DWORD values; the 209-case ledger reports 18 complete/191 partial/469 values. A separate independently pinned overlay channel admits exactly the two and three respective cases. Earlier initializer, source-spelling and XBE-gated channels remain separate.

Stored byte/hash consistency is not full original-XBE authentication. The target is dynamically indirect, and its runtime adapter deliberately remains undefined. Guest register preservation, heap identity, dynamic target replacement, native linkage and whole-function behavior are not established by these source syntax completions.
