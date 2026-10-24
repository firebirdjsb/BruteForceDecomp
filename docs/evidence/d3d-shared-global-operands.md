# D3D shared guest-global operands

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Nine drafts lacked declarations for directly observed guest globals. This
bounded repair adds file-local DWORD declarations or includes the existing
device-global header. It does not define host memory or reconstruct a table.

| Entries | Guest base and observed access |
| --- | --- |
| 0x001f4240 | Device global 0x0037dd88 contains a DWORD guest address; reuse the existing syntax-only header |
| 0x0036d200, 0x0036d390, 0x0036d4d0, 0x00370c50, 0x00370d50 | Indexed DWORD accesses at deferred-state base 0x0037bb30 |
| 0x0036d390 | DWORD load at 0x0037dfb8 |
| 0x0036d4d0 | DWORD stores relative to 0x0037df08 using a signed byte displacement |
| 0x0036ee50, 0x00373730 | Stream DWORD accesses at 0x0037b950; observed record stride is 12 bytes |
| 0x00376e10 | `REP STOSD` clears 0x30 DWORDs beginning at 0x0037b950 |

`scripts/verify_d3d_render_state_guest_base.py` now checks the original
instruction windows for these operands using XBE section mapping. Original
grouped body digests were independently checked against the private executable;
all source entry addresses and digest labels are preserved. All nine drafts
fail the prior isolated C11 syntax check and pass after the declarations on
Windows x86 and x64 using the repository's sweep flags.

The earlier verifier incorrectly treated six file offsets plus 0x10000 as
virtual addresses. Its corrected instruction VAs are 0x0036d22d,
0x0036d249, 0x0036d3c6, 0x0036d4b0, 0x0036d549 and 0x0036d552.
Independent section-mapped disassembly confirms the same original operands;
the render-state guest base 0x0037dd98 is unchanged. This is an evidence
address correction, not a source-inventory or function-boundary change.

Independent approval covers **Level A and limited operand-level B** only.
The scalar-address indexing already present in the drafts does not establish
valid host array storage or bounds. The `D3D_g_` and `D3D8LTCG__D3D_g_`
spellings are not bound linker aliases. The existing device header uses a
host pointer whose width differs from a guest DWORD on 64-bit hosts.
Complete table extent, mapped guest memory, structure layout, implicit register
contracts and native linkage remain unresolved. No Level C/D or completed
runtime service is claimed, and no array extent or implementation is invented.
