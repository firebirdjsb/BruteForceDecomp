# 0x0010a420: connected float output and raw object words

Status: limited original-instruction operand repair; host C11 syntax checked.
Entry signature, label and original body digest are unchanged. This is not
ABI, linking, runtime, Xbox build or byte-match verification.

## Provenance and scope

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x0010a420`, 470 body bytes, original body SHA-256:
  `2700FFB7F14BA3A8679314853598D8D1E97028F9FED986E8906DECD6484448A8`.
- Both whole XBE and exported body digest were checked against original bytes
  on 2026-10-27. The `0x000ef3a0` and `0x0010a2e0` bodies were also checked
  to establish the limited output and float-argument observations below.
- Source path resolves through `tools/source_layout.py` to
  `src/main_unclassified/band_0010/0x0010a420.c`.
- No shared headers, prototypes, inventories, executable, game data or other
  function sources are changed by this repair.

## Observations and derivation

After the initial allocation and three register saves, call its stack pointer
`S`. `0x0010a42d` and `0x0010a435` zero DWORDs at `S+0x14` and `S+0x10`.
`0x0010a441` takes the address `S+0x1c`; `0x0010a445..446` passes it to
the existing indirect target at vtable byte offset `+8`. After that call,
`0x0010a449..455` reads the two contiguous output DWORDs at `S+0x1c` and
`S+0x20`, copying them to `S+0x14` and `S+0x10` respectively. The source
therefore supplies one `uint32_t position_output[2]` to that actual call and
reads both output words from it. It does not initialize unknown output bytes.
The old separate `fStack_4` did not have a source-level connection to the
passed buffer. The later sentinel store at `0x0010a476` reuses `S+0x1c`
only after both output copies, so the list sentinel has a separate C lifetime.

The first copied word is consumed as `m32fp` by `FLD` at `0x0010a55d`
and `0x0010a5d2`; the second by `FLD` at `0x0010a50a` and `0x0010a585`
(accounting for pushes). Each adds the object `m32fp` at byte offset `0`
or `4`. The first call also adds `m32fp` at `0x003a4f78`, whose checked
four bytes are `0000803f`. No SSE instructions occur in this body.
`bf_x86_word_to_f32` interprets the copied words as float storage, replacing
the erroneous numeric pointer-to-float conversions. The original push words
to `0x0010a2e0` are these same two lanes; that callee's instructions use
the corresponding stack slots as `m32fp` (`0x0010a304`, `0x0010a350`,
`0x0010a365`). This establishes operand types, not a complete callable ABI.

`0x0010a4fa` and `0x0010a572` compare **integer DWORD** `[ESI+0x24]`
unsigned with `8`. The `JB` branch uses `LEA EAX,[ESI+0x10]`; the other
branch uses `MOV EAX,[ESI+0x10]`, reading a **32-bit address word**.
The source uses byte-offset views, four-byte `memcpy` reads and
`uintptr_t` only to represent that observed guest address on the host.
There is no invented complete string structure, capacity field declaration,
element width or object size. `[ESI+8]` is also a raw DWORD pushed unchanged
at `0x0010a522` / `0x0010a59e`, and is now copied as a word instead of
passed as a numerically converted float.

`FUN_000ef3a0(&uStack_c)` already passes the real four-byte output object.
That callee's direct paths store a DWORD through the passed address at
`0x000ef3cf`, `0x000ef3fa` and `0x000ef407`; its recursive/delegated
paths forward the same address. The repair retains that dataflow. Instructions
`0x0010a59f..0x0010a5c8` extract its bytes in order `3,0,1,2`, placing
them in result bits `31..24,23..16,15..8,7..0`. Explicit unsigned masks
replace the invalid `._2_2_` pseudo-field without assuming unrelated stack data.

## Focused validation and limits

The unedited source failed on both `i686-pc-windows-msvc` and
`x86_64-pc-windows-msvc` (float-to-pointer and pointer-to-float errors).
After this one repair loop, both targets returned zero using the unchanged
`tools/sweep_c11.py::FLAGS`, `-Iinclude`, and explicit `--target` selection.
No compiler warning suppression was added. A coordinator must still record
the final source digest, independent review and exact-tree audit result.

The original EAX entry input, implicit callee registers, indirect target,
guest address translation, other existing pointer-width assumptions, x87
precision/control state and float argument transport through unprototyped
calls remain `ABI_UNVERIFIED`. Host float expressions are not an x87 emulator.
No runtime execution, original-versus-C differential test or linked build was
performed. Rollback is limited to reverting this source and this evidence file;
no production installation, saves or other user data were touched.

Coordinator integration: independent review accepted the changed operand and
storage facts. Only affected inventory source fingerprints/syntax labels and
the original-byte verifier are updated at integration. ABI and behavior labels
remain unverified. Focused syntax does not replace the complete tree audit.
