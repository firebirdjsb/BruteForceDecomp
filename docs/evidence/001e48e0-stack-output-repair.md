# 0x001E48E0: two-word output scratch repair

Status: **focused C11 syntax passes; partial instruction-backed repair;
ABI_UNVERIFIED; no original-versus-reconstruction execution test**.
This advances the source deferred in
[`001e48e0-caller-stack-scratch.md`](001e48e0-caller-stack-scratch.md).
The earlier note remains historical evidence, not the current source status.

The original XBE was authenticated in full against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
All ordered original body ranges were read from that XBE and hashed:

| Entry | Bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x001E48E0` | 386 | `8866BEFBCD5D7EE5C9642B87D1105CD829F3530B3AC7F3DB41BCA78028975D1F` |
| `0x001EA2E0` | 1350 | `B63F90ED3AEA2863A327E3C453DE343165F397F9AF7973AF6E71597A0B0670A1` |
| `0x001E4A70` | 308 | `8036BBA700328FCB59F285283A5FB9C9ACF1871BA4C1474C7FE4E91C5F3F2839` |
| `0x00238370` | 54 | `3EB699B28D83FE8B8E6545934A0455CB0C3F1FC53E3F210C5DFAB96D5EED4BC6` |

## Caller and storage observations

Disassembling every exported original body found one direct CALL/JMP edge to
`0x001E48E0`: CALL at `0x001EA42B`. This is not proof against indirect callers.
The preceding original allocation uses `PUSH 0x34; CALL 0x002EA01D`.
At `0x001EA41D`, `MOV ECX,[ESP+0x14]` retrieves an existing caller word;
`ADD ESP,4` removes the allocation argument. `PUSH ECX; PUSH EAX` supplies
the two incoming words, followed by the CALL. No value is invented for ECX's
unknown upper bytes. The callee ends in `RET 8`.

Let S be entry ESP. After SUB ESP,12 and saving EBP/ESI/EDI, T=S-24;
the later PUSH EBX changes T to S-28. With original call cleanup, these
identities hold throughout the two open/read/close sequences:

| Original storage | Source storage | Observed use |
| --- | --- | --- |
| EBP, copied from S+4 | `param_1` | destination address, retained before S+4 is overwritten |
| S-12 | `local_c` | initially zero; four-byte first read destination; buffer +8 comparison/store |
| S-8 | `local_8` | sentinel, first open output and first read count output |
| S-4 | `local_4` | saved language DWORD; buffer +4 comparison |
| S+4 | `argument_words[0]` | initially zeroed; both open handle outputs; all subsequent virtual self values |
| S+8 | `argument_words[1]` | original low-byte mode test; second sentinel/open output/read count |

Both incoming words are represented in one contiguous `uint32_t[2]` for their
observed lifetime. A host pointer object is never passed as a four-byte output.
The source signature adds the evidenced second word; this does not implement
the original guest stack entry/return convention or preserve its stack address.

Concrete call argument packets in logical argument order are:

- First virtual +12: self, original path, `0x80000000`, `&local_8`, `&argument_words[0]`.
- First virtual +16: current handle, `&local_c`, 4, `&local_8`; subsequent virtual +12 receives the handle.
- After the low-byte-zero branch: virtual +8 receives the current handle if nonzero; its slot is then zeroed.
- Second virtual +12: self, original path, `0x80000000`, `&argument_words[1]`, `&argument_words[0]`.
- Second virtual +16: current handle, destination buffer, 52, `&argument_words[1]`.
- Second virtual +12 and final virtual +8 both use the handle slot; the final +8 is conditional on nonzero.

All vtable offsets and table entries retain four-byte guest loads. The table
at original `0x0040757C` advances four bytes rather than a host pointer width.
The four-byte buffer stores use memcpy. The saved buffer +12 word is restored
only after the checksum comparison succeeds, matching the original branch.

## Checked instruction windows

These 13 windows were independently compared byte-for-byte with the pinned XBE
after the source edit. Hex is opcode evidence, not copied function bodies.

| Start | Original bytes |
| --- | --- |
| `001EA424` | `5150a358994600e8b0a4ffff` |
| `001E48EF` | `8d54241c528d542414526800000080` |
| `001E4913` | `8974241c8974242c897c24208b0850ff510c` |
| `001E4929` | `8b44241c8b088d542410526a048d5424145250ff5110` |
| `001E4949` | `8a44242084c053b301` |
| `001E4975` | `8d542420528d542428526800000080685875400050ff510c` |
| `001E4991` | `8b4424208b088d542424526a345550ff5110837c242434` |
| `001E49AA` | `8b7d0c89750c8d75348bcde8b63905003bc7752d807d0083897d0c` |
| `001E49C7` | `8b442418394504751b8b4424103b4508751285c0740e55e88d000000` |
| `001E49ED` | `8b4424208b0850ff510c84db742a` |
| `001E4A1E` | `8b542410895508` |
| `001E4A3F` | `8b460483c60485c075eb` |
| `001E4A5F` | `c20800` |

## Verification and unresolved boundaries

Focused Clang syntax checks passed for `i686-pc-windows-msvc` and
`x86_64-pc-windows-msvc` with the repository sweep flags and include directory.
`git diff --check` passed for the changed source. The coordinator refreshes only affected source fingerprints and syntax labels
at integration and adds original-byte windows to the shared verifier. No ABI
or behavior labels, common header, generated totals, game files, installation
or saves are promoted or changed by these source repairs.

The indirect destinations, their actual cleanup and effects, guest address
translation, platform imports, table extent and complete interfaces remain
unverified. Pointer casts are source inspection proxies, not a runtime memory
adapter. In particular original `0x001E49B0..0x001E49B5` sets ESI=buffer+52 and
ECX=buffer for `0x00238370`; the retained ordinary C call still cannot carry
those registers and is explicitly labelled ABI_UNVERIFIED. No new helper
prototype or runtime implementation is inferred. `0x001E4A70` tests its AL
result, which the source now explicitly narrows to eight bits. The source
retains its original address and original body hash without claiming verified
linkage, gameplay behavior, a byte match or a runnable Xbox rebuild.
