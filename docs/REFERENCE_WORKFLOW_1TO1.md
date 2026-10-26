# Reference-informed reconstruction workflow

The user's three references are methodological inputs. The existing project,
C11 source inventory, original XBE hash, main-branch policy and explicit user
instructions remain authoritative. Do not regenerate this project or import
another title's addresses, data structures, prototypes or game behavior.

## Reference snapshots reviewed

| Reference | Reviewed revision | Applicable practice |
| --- | --- | --- |
| [decomp.wtf workflow](https://github.com/i12bp8/decomp.wtf/blob/575b4a30ed481ff5497dfb9ce4f599368a95a04a/src/decompnet/app/guide/workflow.md) | `575b4a30ed481ff5497dfb9ce4f599368a95a04a` | Start from the best existing attempt; assign individual function ownership; preserve notes; compare generated instructions before claiming a match. |
| [REA agent rules](https://github.com/morluto/rea/blob/aa6c1d49fd8db201cb5619c90bee2899452dfed7/AGENTS.md) | `aa6c1d49fd8db201cb5619c90bee2899452dfed7` | Separate observations, derivations, hypotheses and unknowns. Retain evidence; minimize repeated context and analysis; invalidate cached results when relevant inputs change. |
| [XboxRecomp contribution guidance](https://github.com/sp00nznet/xboxrecomp/blob/f0f8a461496a4f23d9b0aeaa284b8d70ba7ab82b/CONTRIBUTING.md) | `f0f8a461496a4f23d9b0aeaa284b8d70ba7ab82b` | Check actual instruction behavior and guest register/stack contracts; use original-versus-reconstruction differential tests, including negative controls where useful; respect third-party licensing. |

These repositories' installation, release and contribution procedures govern
those projects. They do not require importing their tooling or replacing our
source architecture. In particular, decomp.wtf's archived README does not
establish an original-Xbox matching compiler pipeline for this project. Its
matching discipline is useful without claiming an installed or verified
Brute Force integration. No reference source code is copied by this policy.

## Efficient batch procedure in this repository

1. Fetch main and inspect changes before assigning functions. Preserve local
   edits; integrate only after checking overlap. Read the latest complete
   audit artifact and its exact commit. Use `tools/source_layout.py` for paths.
2. Validate the artifact with `tools/verify_audit_artifact_consistency.py` and
   use `tools/triage_c11_failures.py` / `scripts/group_guest_stack_failures.py`
   for compact queues. Categories are diagnostic search aids, not ABI facts.
   Never allocate a function from a stale queue without checking current source.
3. Give each source file one editing owner. Share only the failing diagnostic,
   original address/body digest, relevant instruction windows, known inputs,
   stack offsets, caller/callee facts, uncertainties and next action. Keep full
   private disassembly accessible locally rather than repeating it in prompts.
4. Cache original instruction facts by whole-XBE hash, entry and ordered body
   ranges/digest. Cache source conclusions separately by source digest, relevant
   headers/helpers and compiler flags. An unchanged binary does not make an
   edited C draft's earlier review current. Do not cache live state as immutable.
5. Prefer shared contracts only when callers, callees and memory accesses prove
   them. Preserve unknown high bytes, partial writes, 32-bit guest addresses,
   comparison state, SIMD lanes and x87 precision concerns. No invented values,
   prototypes or helper behavior to silence errors. Defer after two unsuccessful
   repair loops with a precise evidence packet; move to independent work.
6. Run focused checks before independent review. Pin changed facts to the XBE
   and document unresolved interfaces. Use meaningful differential cases when
   an execution oracle is available; test failure paths and aliasing where they
   matter. A test of a formula alone is not an original-machine comparison.
7. One coordinator updates only changed inventory rows, commits reviewed fixes
   to main and runs the final exact-tree audit. Compare per-function results
   with the baseline; distinguish this batch's repairs from concurrent upstream
   work. Pull and verify generated progress only after the audit completes.

## Evidence and publication boundaries

- **Syntax:** parses with documented sweep flags; not a standalone build.
- **Instruction facts:** identified operands, writes or edges match pinned bytes;
  does not imply the entire function has correct semantics.
- **Interfaces:** all relevant register/stack inputs, outputs, cleanup and helper
  dependencies independently established; partial facts are labelled partial.
- **Behavior:** actual original-versus-reconstruction tests with stated coverage.
- **Byte match:** actual compiled and linked output compared to the original
  with a documented compatible toolchain; never inferred from syntax or tests.

The original XBE, assets, private dumps, databases and local machine paths stay
out of Git. Keep original-compatible reconstruction separate from optional
Reloaded enhancements. Unknown metrics remain unknown. A modern runtime or
another game's conformance result is not evidence of Brute Force equivalence.
See [the XboxRecomp boundary](XBOXRECOMP_REFERENCE_1TO1.md) for detailed guest
state and platform-adapter rules.
