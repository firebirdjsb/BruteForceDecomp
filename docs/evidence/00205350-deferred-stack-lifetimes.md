# 0x00205350: connected scalar/vector lifetimes and scoped getter operations

Status: bounded C11 memory-operation and stack-lifetime repair; caller and
three getter drafts pass focused syntax checks. Original entry interfaces,
complete x87 behavior, Xbox runtime behavior and byte match remain unverified.
This note retains the original deferral facts and records the scoped repair.

## Provenance

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The XBE and the following original body digests were checked before analysis:

| Entry | Body bytes | SHA-256 |
| --- | ---: | --- |
| `0x00205350` | 1392 | `6F0DFA692F241AE1D5888DACA0E579145B1B7072A4FEC12440BCA1C2DA136A28` |
| `0x00234DC0` | 312 | `ECB5D129E8C5EFB3D488E233677D4DB54F3E01E85FDF9D18B880AF3B7119B10B` |
| `0x0001FD10` | 39 | `08D2CC5256CD581BE8FFA89CEC01B4C39BE7F3CDD29052BB4827CB1C2FCC4815` |
| `0x0001FC40` | 40 | `DE39B6DECE42B44E9508DD2033A9641D4725D83CE2F99F0BBC52BE9D5E26A993` |
| `0x0001FDD0` | 40 | `13832B0FFE3CCB2E86EC5E06B944B7E16DDDFE35C04F722A781393BBBEECF49F` |

`tools/source_layout.py` resolves the caller to
`src/main_unclassified/band_0020/0x00205350.c`. The pre-repair canonical Git LF source SHA-256 was
`6d23844061dbc3373096b3657f5d48e2bc4e4751fa960f7f27bef383809bc9bc`;
the repaired canonical LF digest is `87c0b479a79b1f45dc909124263c69a96e71b83d785ac4517884d197fd22e56f`.
Whole-XBE and all four changed bodies were freshly reauthenticated.

## Branch and slot map

Define `S` as ESP after entry's `SUB ESP,0xEC; PUSH ESI`. The explicit arguments
are `[S+0xF4]` and `[S+0xF8]`. On the fallback path `PUSH EDI` at `0x00205485`
creates `T=S-4`; its arguments are `[T+0xF8]` and `[T+0xFC]`. Offsets below are
guest bytes, not inferred structure definitions.

| Branch / instruction window | Observed lifetime and connected consumer |
| --- | --- |
| ID `0xFD8F670C`, `0x0020539C..0x002053A5` | Pushes the address of the original second argument, then the object, into `0x00234DC0`. No new buffer is needed. |
| ID `0xE94EB66A`, `0x002053BC..0x002053DC` | FLD `[S+0xF8]`; FMUL constant at `0x003A4FE0`; LEA EAX=`S+8`; PUSH EAX; FSTP `[ESP+0x0C]` now means `[S+8]`; PUSH object; CALL `0x00234DC0`. This is a 4-byte float stored in the same slot whose address was pushed. Draft `local_e8 = (undefined4 *)(float expression)` conflates this scalar with later scratch pointers. |
| ID `0xE3BE168E`, `0x00205403..0x0020546D` | Zeroes 12 bytes at `[S+0x18/0x1C/0x20]`; an axis value `0/1/2` replaces the corresponding DWORD with second-argument bits; pushes `S+0x18`, then object, into `0x00234DC0`. Draft `local_d8/local_d4/local_d0` represent this contiguous three-float buffer. The third element is float bits, not a pointer. Other axis values retain all three zero DWORDs. |
| Fallback mode 0, `0x002054BC..0x0020558D` | Virtual slot `+0x40` supplies EAX; reads float bits from EAX `+0x24/+0x28/+0x2C` into `[T+0x1C/0x20/0x24]`. Reads the caller object `+0x88/+0x8C/+0x90` into `[T+0x34/0x38/0x3C]`. Axis `0/1/2` replaces the matching output with that object's float plus the second argument. Then pushes `T+0x1C` to virtual slot `+0x48`. Draft `local_d0` again represents the third float, and `local_e8` temporarily transports its DWORD bits. The virtual targets remain unresolved. |
| Fallback mode 1, `0x002055A4..0x002055C9` | Virtual slot `+0x40` returns EAX, saved in ESI. Three direct calls pass this ESI through ECX and distinct EAX output addresses; see the getter table below. |
| Mode 1, `0x002055CE..0x00205601` | Copies object `+0x88/+0x8C/+0x90` float bits to `[T+0x40/0x44/0x48]`. Draft `puStack_ac` is this last float lifetime, not a pointer. |
| Mode 1 axis 0/1/2, `0x00205615..0x0020575E` | Uses the respective getter buffer `T+0x1C`, `T+0x4C`, or `T+0x34`. SSE broadcasts the second argument and multiplies three components, storing them at `[T+0x10/0x14/0x18]`. x87 adds the three object floats; the resulting 12 bytes go to `[T+0x28/0x2C/0x30]`. PUSH `T+0x28` at `0x00205768` connects this result to virtual slot `+0x48`. Draft `local_e8`/`puStack_c4` conflate the third scalar result with pointer scratch lifetimes. |
| Mode 1 other axis, `0x0020560F -> 0x00205762` | Bypasses the output stores and still passes `T+0x28` to virtual slot `+0x48`. These 12 bytes are not established on this path. Do not zero-fill or manufacture a default vector. |

Fallback modes 2/3 have separate matrix operations and pointer scratch lifetimes;
they do not justify globally changing `local_e8` from pointer to float. Draft
`uStack_a4` also conflates packed float components with a numeric 64-bit value;
converting that integer numerically to float would not recover its components.

## Callee contracts: available and missing

`0x00234DC0` has an existing typed draft `void(uint *, float *)`. Original
instructions load its two arguments from `[entry ESP+4/8]` and use `RET 8`.
For ID `0xE94EB66A` it reads one DWORD through argument 2, performs SSE clamp
operations, and stores a float through the object. For ID `0xE3BE168E` it reads
three DWORDs through argument 2 at byte offsets `0/4/8` and writes those bits to
object offsets `0x48/0x4C/0x50`. These observations establish the early buffers'
actual consumers; they do not validate the callee's entire current C draft.
In particular, its existing numeric `(uint)` conversions are not proof of the
original bit-preserving stores.

The mode-1 getters are a different interface:

| Call site / target | Incoming registers | Original output |
| --- | --- | --- |
| `0x002055B3 -> 0x0001FD10` | EAX=`T+0x1C`, ECX=ESI | Three DWORDs from ECX `+0/+0x0C/+0x18` to EAX `+0/+4/+8`. The first component uses MOV; later components pass through x87 loads/stores. |
| `0x002055BE -> 0x0001FC40` | EAX=`T+0x4C`, ECX=ESI | Three floats from ECX `+4/+0x10/+0x1C` to EAX `+0/+4/+8` through x87 loads/stores. |
| `0x002055C9 -> 0x0001FDD0` | EAX=`T+0x34`, ECX=ESI | Three floats from ECX `+8/+0x14/+0x20` to EAX `+0/+4/+8` through x87 loads/stores. |

All three original getters use plain RET and no stack arguments. They receive
an output address through EAX and source through ECX. Their original
`void(void)` C entry declarations and original identity/body labels remain
unchanged. The wrappers retain explicitly unbound `in_EAX/in_ECX` values and
remain `ABI_UNVERIFIED`; no C argument convention is asserted for those entries.

## Scoped repair

`src/contracts/bf_0001fc40_getter_operations.h` defines three function-specific
internal memory operations. The getter wrappers and the caller use those same
operations, so each observed producer has one C implementation. These are host
operations with explicit inputs, not a global-register ABI, runtime bridge,
new original-function prototype or duplicate implementation. The header is
active C11 reconstruction source under `src/`.

Each operation stages the third, second and first source components before
writing any destination bytes, then writes exactly twelve bytes at output
`+0/+4/+8`. There is no `restrict`; source/output overlap retains these snapshots.
`0x1fd10` preserves its first component as raw MOV bits; its other components,
and all components in `0x1fc40/0x1fdd0`, retain explicit C proxies for the observed
x87 m32fp load/spill steps. The original eight-byte guest scratch stack is not
modeled: overlap with that scratch, guest address mapping, memory fault order,
x87 control/status, signaling-NaN quieting, rounding and exception behavior
remain unverified. Host `long double` is not an x87 emulator.

The caller now binds each operation to the source returned in EAX by virtual
slot `+0x40`, and to the actual twelve-byte producer outputs at `T+0x1c`,
`T+0x4c`, and `T+0x34`. That virtual call's original ECX/return contract remains
unbound at the C entry interface. No virtual target or prototype was invented.
After `0x2055b3`, the caller sets EAX/ECX for the next producer; EDX is not
consumed before a later overwrite. The same holds after `0x2055be`. After
`0x2055c9`, `0x2055ce/d5/db` overwrite EAX/ECX/EDX before use. The SUB at
`0x2055ee` replaces flags before its branch. ESI and EDI survive all three
original getter bodies. This establishes that omitted getter register/flag
outputs have no observed consumer along this caller path; it does not establish
a general register-output contract for other callers.

The caller separates the early scalar at `S+8`, early axis vector at `S+0x18`,
mode-0 position and object-base vectors at `T+0x1c` and `T+0x34`, mode-1 getter
outputs, object-base vector at `T+0x40`, scaled vector at `T+0x10`, and result
at `T+0x28`. Existing matrix-branch pointer scratch and unverified helper
interfaces remain separate. Original constant `0x003a4fe0` has bytes
`35 fa 8e 3c`, matching the retained `0.017453292f` operand.

Mode 1 retains MOVSS/SHUFPS scalar broadcast, memory MOVSS/MOVHPS lanes
`[X,+0,Y,Z]`, all four MULPS lanes (including scalar times zero), and twelve-byte
stores of lanes 0,2,3. The x87 path loads Y before Z, adds/spills Z then Y, and
finally forms X. Axis zero uses `base X + scaled X`; other axes use
`scaled X + base X`. Result stores remain X/Y/Z. C floating expressions do not
verify the original processor or floating-point environment. Invalid axes still
pass twelve unestablished result bytes; they are deliberately not zero-filled.

## Verification and limits

- Before editing, the caller failed both Windows-target focused C11 checks with
  the original float-to-pointer diagnostics; the three getter drafts passed.
- After editing, all four entries pass with no diagnostics for
  `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`, using unchanged
  `tools/sweep_c11.py` flags. `git diff --check` passes.
- Private native tests compared the exact shared-header operations against
  adapted original getter x87/MOV instruction sequences at O0 and O2. Each
  build passed 154,836 full-backing-buffer comparisons: all three operations,
  finite random values, signed zeros, finite extrema/subnormals and 51 output
  placements including disjoint, identical, partially overlapping and unaligned
  source/output regions. The oracle uses host pointer registers and scratch
  placement, masked extended/RNE x87 control `037f`, and MXCSR `1f80`.
- A wrong third-component offset mutation was rejected. This validates the
  bounded memory-operation corpus against adapted instructions; it does not
  execute the original Xbox entry ABI, caller, original machine or game.
  Status flags, signaling NaNs, scratch aliasing and fault/trap behavior were
  not compared. Private test inputs/outputs are not public repository artifacts.
- Independent review checked original bytes, read/write and operand order,
  register-output liveness, unchanged signatures and both-target syntax.
  The review accepted this limited memory/lifetime scope, not full semantics.

Only four original-entry C sources, the scoped contract header and this note
changed for this repair. No shared verifier, metadata, game data, assets, process,
production installation or deployment changed. Rollback restores those four
sources and this note and removes the new contract header. Full callee behavior,
32-bit guest mapping, original stack aliasing, matrix helpers, virtual interfaces,
x87/SSE environment, runtime behavior and byte-identical rebuilding remain
`ABI_UNVERIFIED`. No whole-function behavior or byte-match claim is made.

Portable regression fixtures are retained in
`tests/test_20261028_memory_operations.c` and run by
`scripts/verify_20261028_memory_operations.py` in the full audit workflow.
Each O0/O2 run checks 745 fixed-value full-buffer cases, including unaligned
and overlapping output placements and FD10 raw first-word preservation.
These golden tests check the shared memory operations, not the caller ABI
or original-game execution.
