# 0x00220120 scalar lifetimes and recursive spans

The complete source now passes host C11 syntax. Changed storage lifetimes,
recursive argument spans and scalar SSE instruction forms were checked against
the original instructions. Complete x87 precision/comparison flags, guest ABI,
Xbox execution and a byte-identical rebuild remain unverified.

## Original evidence

Whole original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Entry `0x00220120` has a contiguous 3,239-byte original body with SHA-256
`B84F519BC070EC6E334C45E8F9C18F5CDCC351009BF03E59720FD871335E3D51`.
The verifier reauthenticates both hashes when supplied the private original.
It retains selected instruction windows, not a complete disassembly or binary.
Source location is resolved through `tools/source_layout.py`.

Let F denote ESP after the original `SUB ESP,0x68` and four register saves.
This identifies original guest locations; it does not prescribe a host frame.

| Original location | Preserved input and later lifetime |
| --- | --- |
| F+0x80 | Original second input pointer saved in EBX at 0x220128; later F32 coefficient stores/readbacks become `coefficient_2` |
| F+0x84 | Third input pointer saved in ESI at 0x220132; an earlier floating intermediate remains distinct from the signed recursive code lifetime, beginning with the -1 DWORD store at 0x22064a |
| F+0x88 | Fourth input pointer saved in EDI at 0x220143; squared norm stored as F32 at 0x220187, retained in floating locals for later divisions and fallback paths |
| F+0x94 | Code-output pointer preserved in EBP at 0x220207 before the home is reused as the other F32 coefficient (`coefficient_7`) |
| F+0x98 | Flag byte consumed at 0x220641, then overwritten by component/SSE scratch stores; the draft's later whole-slot norm store is explicitly a separate F32 lifetime |

The original input aliases and entry signature remain present. Float-pointer
casts and pointer-sized recursive status storage have been removed throughout
the connected coefficient/recursive/fallback paths. Constants written as
`0x3f800000` in F32 slots become `1.0f`; zero writes become `0.0f`.
The code output is one four-byte `int`, guarded by a size assertion.

## Recursive spans and SSE

The pushes at 0x220afa..0x220b3f pass, in C order:
`(original_arg1, F+0x60, F+0x48, F+0x3c, 0, F+0x6c, F+0x84, 0)`.
The input regions are three-float objects; the recursive vector output occupies
F+0x6c/+0x70/+0x74. Its former four-byte C array could not contain those writes.
The recursive code has a separate four-byte output object, initialized to the
observed sentinel. Returned ST0 is discarded at 0x220b44; the code is reloaded
and used in the existing outer code/fallback branches.

All seven RSQRTSS and three SQRTSS operations are represented by scalar x86
intrinsics. Their low results are extracted as F32. Upper XMM lanes have no
consumers in this original body; temporary intrinsic upper lanes are not
asserted to model guest register state. This retains approximate RSQRTSS rather
than substituting an exact square root/divide. Host MXCSR and CPU behavior are
not an Xbox FPU emulator. Existing scalar expression precision, evaluation
order and comparison/NaN behavior still require separate instruction review.

## Checks and limits

`scripts/verify_00220120_scalar_lifetimes.py` compiles the actual complete source
at O0 and O2 with strict C11 diagnostics. It instruments call counts and observes
the recursive code without replacing the recursive callee. Eighty-four cases
cover seven finite orthogonal-input regions, two translations, enabled/disabled
recursion and three scalar radii. They check vector outputs, distance, status,
recursive code writes and external output canaries. Negative controls reject
numeric conversion of the one-bit-pattern constant and a wrong recursive input
component. Tests use independent finite-coordinate expectations; they do not
execute original machine code or establish full semantic equivalence.

The shared header's unchanged unprototyped `code` alias has its strict-prototype
warning disabled in this standalone fixture. This function makes no calls
through that alias. Sweep flags and the shared header are unchanged. Focused
i686 and x86_64 syntax checks use the existing sweep flags.

Independent review covers the changed scalar lives, vector extents, recursive
call and bounded test claims. Entry/body provenance and inventory origin,
ABI/behavior flags remain unchanged. Other inspected functions were left
unchanged when their producers or callback/register contracts were unresolved.
No game process, installation, assets, saves, deployment or production data was
touched. Private binary/disassembly evidence stays untracked.
