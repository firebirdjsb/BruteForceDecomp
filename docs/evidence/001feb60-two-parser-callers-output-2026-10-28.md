# 0x001FEB60: bounded guest output-slot binding for both parser dispatch callers

Status: **limited observed memory/dataflow contract** in separate C11 model.
The original `0x001FEB60`, `0x001FF0F0`, `0x002058C0` draft sources are
unchanged, and the two dispatcher sources still fail syntax. This does not
establish an original CALL/RET bridge, register preservation, original
exception path, final jump table behavior, whole caller parity or native link.

## Provenance and x86 evidence

Original game XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original `0x001FEB60` body: 77 bytes; SHA-256
`42606AB29F564BC92F0122FFAA816C7872E1284F940D7E44EB260D28AD75A3CC`.
These original instruction and live-register observations come from
[`001ff0f0-002058c0-dispatch-source.md`](001ff0f0-002058c0-dispatch-source.md).

- The helper's original implicit EAX is the **address of a cursor DWORD**;
  EBX is the **address of the output DWORD**; ESI is the selector pointer;
  EDI is the owner pointer. On entry it stores zero through EBX.
- The caller output DWORD is at live pre-CALL guest `ESP+0x10`; the cursor
  DWORD is at `ESP+0x14`. They are separate guest addresses, not host locals.
  On successful selection, the helper writes the candidate pointer into
  EBX's output word, advances the cursor through the node's next pointer,
  and sets **AL** to 1; exhaustion gives AL=0. Upper EAX bits are not
  declared return-contract outputs.
- Each candidate node is read at node+8. The helper checks selector+4
  against candidate+4, selector+8 against candidate+0x0C and signed
  candidate+0x14 less than candidate+0x10. Failure advances cursor to
  node+0 until the owner+0x30 sentinel is reached.
- After AL=1, `0x001FF0F0` loads the candidate pointer from the output
  slot then reads `[candidate+8]`, subtracts 2 (DWORD arithmetic), and
  dispatches with original bounds and table.
- `0x002058C0` uses the same output storage and `[candidate+8]` word,
  but subtracts **4** and uses a **different** jump table. No address-8
  absolute RAM read is present in these dispatch paths.

Known CALL and consumer read windows:

| Source | Observed site | Original bytes |
| --- | --- | --- |
| 0x001FF0F0 | `0x001FF12C` CALL | `E8 2F FA FF FF` |
| 0x001FF0F0 | `0x001FF144` MOV EAX,[EDI+8] | `8B 47 08` |
| 0x002058C0 | `0x0020590F` CALL | `E8 4C 92 FF FF` |
| 0x002058C0 | `0x00205924` MOV EAX,[ESI+8] | `8B 46 08` |

## Implementation scope and checks

`include/bf_x86_parser_item_001feb60.h` provides a bounded C11 projection
of those success/empty-list selection and output slots using `uint32_t`
guest addresses and caller-provided DWORD memory callbacks. It rejects
missing callbacks. It exposes the exact two caller slot addresses rather
than inventing host pointers or a shared global `uRam00000008`.
It preserves 32-bit signed comparison and DWORD wrap. An optional helper
reads `[matched_item+8]` to produce the **raw input** and subtract-adjusted
index for either caller; jump-table bounds, its byte lookup and the indirect
jump remain deliberately outside this model.

`python3 scripts/verify_001feb60_guest_output.py --root .` runs Windows
x86/x64 Clang C11 syntax checks and portable `-O0`/`-O2` tests with separate
node/selection/owner/stack guest memory. Cases include first/second match,
end-of-list, failed candidate comparisons, signed count/capacity ordering,
zero output on entry, output/cursor advancement, distinct subtract-2 and
subtract-4 caller inputs and callbacks that fail after earlier writes.
No original x86 instruction-fault EIP, partial-word memory faults, cycle
handling or host-to-guest memory mapping is claimed. Unlike the real CPU,
the model reports I/O faults as a status rather than delivering Xbox SEH.

Optional `--xbe /path/to/original/default.xbe` reauthenticates the pinned
original XBE SHA, 77-byte helper body and four CALL/MOV instruction windows.
Public CI never has the XBE; its memory/control-flow projection remains
**locally source-supported, NOT freshly 1:1 binary verified**.

Next step is to bind real EAX/EBX/ESI/EDI register state and the caller's
pre-CALL ESP to the guest runtime, account for the original CALL and
return/flags protocol, and only then replace each draft `uRam00000008`
switch with the real selected-item output and exact original jump table.
The input producer contracts and downstream callback interfaces must also
be verified before updating host C11 syntax coverage or native-link status.
