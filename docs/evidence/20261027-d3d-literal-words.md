# D3D literal words and guest address operands

Scope: bounded operand representations in `0x0036ff70` and `0x00379139`.
Original instruction facts and focused host C11 syntax are checked. These
remain unverified drafts; no interface, behavior or byte-match claim follows.

## Original provenance

Whole-XBE SHA-256, checked before inspecting the section-mapped original bytes:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

| Entry | Inclusive original body range | Bytes | Original body SHA-256 |
| --- | --- | ---: | --- |
| `0x0036ff70` | `0x0036ff70..0x00370170` | 513 | `0B5AAF10156272D654E04DD5E33DBBA318E63B76A5E991EB0B7919F3B9957225` |
| `0x00379139` | `0x00379139..0x003793b4` | 636 | `64D90201B8E3D27D1EDF89BC2C84CCDD1E40D88A3A5C9D52B9EB1BA40083FCF2` |

Each original body was read using its export's ordered body ranges and its
SHA-256 matched the immutable embedded source label before editing. Source
paths were resolved through `tools/source_layout.py`. Entry signatures, labels
and body hashes are unchanged.

## Instruction evidence

| Site | Original bytes | Observed operation | Draft correction |
| --- | --- | --- | --- |
| `0x0036ffe2` | `c7400400002100` | `MOV DWORD [EAX+4],0x00210000` | `puVar4[1]` receives the immediate DWORD |
| `0x00370073` | `bf98dd3700` | `MOV EDI,0x0037dd98` | Explicit guest address for the existing copy destination |
| `0x00370080` | `890db8df3700` | `MOV DWORD [0x0037dfb8],ECX` | Explicit guest address for the four-byte store |
| `0x00370095` | `c70060022000` | `MOV DWORD [EAX],0x00200260` | `*puVar5` receives the immediate DWORD |
| `0x0037013d` | `c780f000000088020800` | `MOV DWORD [EAX+0xf0],0x00080288` | `puVar5[0x3c]` receives the immediate DWORD |
| `0x00379183` | `c783f4070000ffc32800` | `MOV DWORD [EBX+0x7f4],0x0028c3ff` | `in_EAX[0x1fd]` receives the immediate DWORD |
| `0x00379207` | `8986800b4000` | `MOV DWORD [ESI+0x400b80],EAX` | Guest byte-address sum replaces `&LAB_00400b80` |
| `0x003792ef` | `8d8680094000` | `LEA EAX,[ESI+0x400980]` | Guest byte-address sum replaces `&LAB_00400980` |
| `0x00379327` | `8b8624031000` | `MOV EAX,DWORD [ESI+0x100324]` | One four-byte guest load replaces the two inferred label expressions |

At `0x0037006c`, `MOV ECX,0x39` (`b939000000`), followed by `REP MOVSD`
at `0x00370078` (`f3a5`), supplies the existing copy's 57-DWORD extent.
`0x0037007a` (`8b8dd8000000`) reloads the DWORD at `[EBP+0xd8]` before
the absolute store at `0x00370080`. No host render-state binding is supplied.

For `0x00379139`, `0x003791d1` (`8b83f4070000`) reloads `[EBX+0x7f4]`
and `0x003791d7` (`898680084000`) copies it to `[ESI+0x400880]`.
The literal value's meaning is unknown. At `0x00379327` the original code
loads once, then writes that EAX value at `0x0037932d`
(`8986a0094000`, `[ESI+0x4009a0]`) and `0x0037933d`
(`898654074000`, `[ESI+0x400754]`). The draft now reuses `uVar4` for that
load; the destination expressions remain outside this bounded repair.

Immediate words use `UINT32_C` rather than addresses of host labels. Changed
guest sums use unsigned 32-bit addition before conversion through `uintptr_t`;
they are byte offsets with x86 address wrap, not scaled host-object offsets.
Pointer casts record the guest address and do not implement guest mapping.

## Verification and remaining limits

Before editing, both entries failed focused C11 syntax on both Windows
targets. After editing, all four checks passed with Clang targeting
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`, using the unchanged
`tools/sweep_c11.py` `FLAGS` and repository include directory. Existing sweep
warning suppressions remain syntax policy, not evidence of a valid interface.

No new declarations, dependencies, runtime bindings or original-game data
were added. The removed `DAT_00080288` declaration was unused after replacing
its address expression with the original immediate. Implicit EAX inputs,
helper prototypes, remaining DAT/PTR host-symbol address arithmetic and signed
overflow, pointer mapping, register/flag contracts, memory aliasing and
complete function semantics remain `ABI_UNVERIFIED`. Native execution,
original-machine differential tests and byte-identical rebuilding were not
performed.

Only the two source files and this note changed in this work unit. No game,
installed binary, production data or deployment was touched. Restoring these
three files rolls back this scoped source repair. Repository-wide audit,
inventory updates and independent review are coordinator responsibilities;
focused checks alone do not change repository pass totals or fidelity status.

Integration review: an independent reviewer authenticated the original bytes
and accepted the changed operand, storage or argument-word correspondence.
Whole-function ABI, native execution and game behavior remain unverified.
