# FUN_001FEB60 original Xbox iterator: missing register ABI at callers

Status: **verified instruction and caller-site evidence; caller group deliberately
deferred until a single shared guest register/call adapter is designed**.
No count of native-behaviorally verified functions is implied.

Original XBE SHA-256 (private, never committed):
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

## Shared x86 register inputs and outputs

The Xbox entry `0x001FEB60` has *no stack-argument prologue*. Its register
inputs, established directly from the original x86, are:

- `EAX`: address of the guest iterator cursor DWORD, `uint32_t *cursor`.
- `EBX`: address of a writable guest output DWORD, `uint32_t *result`.
- `ESI`: guest filter/query pointer, read at offsets `+4` and `+8`.
- `EDI`: guest owner pointer, whose `+0x30` slot is the list end sentinel.

At `0x001FEB60`, `MOV [EBX],0` always clears the output. At
`0x001FEB66`, `MOV ECX,[EAX]` loads the current node. At
`0x001FEB68`, the node is compared to `[EDI+0x30]` (end).

The loop at `0x001FEB70-0x001FEB96` follows the linked list and filters
the payload at `[node+8]` by two DWORD key comparisons:

- `[ESI+4] == [payload+4]` at `0x001FEB75-0x001FEB7B`.
- `[ESI+8] == [payload+0x0C]` at `0x001FEB7D-0x001FEB83`.
- `[payload+0x14] < [payload+0x10]` at `0x001FEB85-0x001FEB8B`.

On a matching node, `0x001FEBA1 MOV [EBX],ECX` stores the matching payload
guest address; `0x001FEBA7 MOV [EAX],ECX` advances the cursor to the next
node; and `0x001FEBA9 MOV AL,1` returns true. On exhaustion,
`0x001FEB98 XOR AL,AL` returns false, leaving the output zero.
The source `src/main_unclassified/band_001f/0x001feb60.c` currently
references opaque `in_EAX`, `unaff_EBX`, `unaff_ESI`, `unaff_EDI`; its
`void`-parameter draft declaration hides the shared register contract.

## Two verified direct callers affected by the same first syntax failure

`src/main_unclassified/band_001f/0x001ff0f0.c`:
- `0x001FF122 LEA EBX,[ESP+0x10]` points to the output word.
- `0x001FF126 LEA EAX,[ESP+0x14]` points to the cursor word.
- `0x001FF12A MOV EDI,EBP` selects the owner.
- `0x001FF12C CALL 0x001FEB60` performs the lookup.
- `0x001FF140 MOV EDI,[ESP+0x10]` reloads the output payload.
- `0x001FF144 MOV EAX,[EDI+0x08]` loads its event type.

`src/main_unclassified/band_0020/0x002058c0.c`:
- `0x00205905 LEA EBX,[ESP+0x10]` points to its output word.
- `0x00205909 LEA EAX,[ESP+0x14]` points to its cursor word.
- `0x0020590D MOV EDI,EBP` selects the owner.
- `0x0020590F CALL 0x001FEB60` performs the lookup.
- `0x00205920 MOV ESI,[ESP+0x10]` reloads the payload.
- `0x00205924 MOV EAX,[ESI+0x08]` loads its event type.

Both Ghidra drafts currently emit `switch(uRam00000008)`; that symbol
is not a real global at guest address eight. It represents the event type
read from a **returned payload pointer**. The missing pointer output is
shared with many original callers.

A raw little-endian relative-CALL scan of the authenticated executable
yielded **84 candidate `E8 rel32` encodings targeting `0x001FEB60`**.
These are candidates, not a count of independently validated instruction
boundaries. The two fully disassembled callers above are confirmed.

## Safe continuation / verification requirements

1. Inventory and instruction-boundary verify the original direct callsites.
2. Recover the four original guest registers (`EAX/EBX/ESI/EDI`) for each
   caller group, distinguishing guest pointers from native host addresses.
3. Introduce a **single explicit guest-register adapter**, or a verified
   C interface with four inputs and explicit result/iterator outputs, for
   the entire impacted caller set rather than privately patching one switch.
4. Preserve the match/exhaustion semantics, output zeroing, cursor advance,
   event type DWORD load `[payload+8]`, and any current-owner lifetime.
5. Run original opcode and isolated Clang tests, full 13,694-source C11
   regression, and later cross-function native ABI checks before marking
   either function as behaviorally verified.

**Deferred deliberately:** inserting a guessed declaration for
`uRam00000008` or a fake local event tag would hide compiler failures and
disconnect these functions from their shared iterator behavior.
