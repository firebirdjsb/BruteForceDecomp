# 0x0011afa0 scalar/storage repair and exact-tree audit

Reviewed implementation commit:
`28189d316a78fc2d6ea929f28d513d8ec87feaf4`, on main.

Starting main tip `ae7f8be1` matched the implementation of the completed
[Linux audit 40905378049](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40905378049)
at `d6a5ce7a`: 13,632 passing / 62 failing. Pull found no new commits. The
complete downloaded artifact was revalidated against canonical source bytes
and inventory before choosing the next repair.

The caller had 65 diagnostics with the compiler error limit disabled. The
repair replaces pseudo-SIMD members and numeric qword-to-float conversions
with original scalar instructions and F32 storage, connects the F+0x24
in-place normalization output, preserves separate packed multiplication
stages and raw-copy ordering, and supplies evidenced address-taken spans.
See [the instruction and storage evidence](../evidence/0011afa0-scalar-storage.md).

Changed files: the caller, one memory-operation header, one inventory row,
the scalar/storage verifier, the full-audit workflow and evidence note.
Original entry/signature/body digest and inventory origin/ABI/behavior flags
remain intact. No external prototype, shared type header or unrelated
function changed. This separate audit note changes no implementation.

## Exact committed-source result

Windows Clang 22.1.8 audited canonical Git bytes from `28189d31` using the
existing sweep flags in 195.9 seconds.

| Result | Count |
| --- | ---: |
| Source functions checked | 13,694 |
| Windows host syntax passes | 13,632 |
| Windows host syntax failures | 62 |
| Other results | 0 |
| New passes | 1: 0x0011afa0 |
| Regressions | 0 |
| Source fingerprint drift | 0 |
| Missing/mismatched/unindexed original body labels | 0 |

Compared with the Windows baseline at `6729f0cb` (13,631 / 63), only this
caller's status and source fingerprint changed. Report, triage and grouped
stack offsets passed consistency checks against the exact source commit.
Thirty first-error guest-stack references remain. Windows retains the
intentional 0x002F01A2 guard rejecting its default eight-byte long double;
Linux counts are verified separately from the complete remote artifact.

Focused checks passed both i686/x86_64 source syntax targets, pinned whole
XBE/six complete bodies/instruction windows, and strict O0/O2 host fixtures:
120 scalar-lane cases, 20 unaligned normalizers with guards, 40 direction
paths and 25 raw-copy aliases at each optimization. Two corruption controls
were rejected. Source layout, full-audit path filters, existing published
progress consistency, whitespace and repository safety checks passed.

Independent review approved the changed storage/dataflow against original
instructions and independently authenticated the body/window evidence. Its
fixture rerun encountered a temporary DLL permission error; the coordinator's
complete O0/O2 run succeeded. Remote Linux CI provides the additional platform
check after publication.

## Limits and rollback

These fixtures exercise actual caller excerpts and one memory operation,
not the entire caller or original machine code. The existing tail helper
drafts still omit ECX/EDX bindings, and the 0x00306c80 ST0 input remains
unbound. Full guest ABI, pointer translation, x87 precision/control/status,
exceptional behavior, Xbox execution and byte matching remain unverified.
Reaching full syntax coverage would not establish a playable game build.

No game process, installation, assets, saves, deployment or production data
was touched. Private XBE/disassembly stay untracked. Revert `28189d31` and
rerun the checks to roll back this repair.
