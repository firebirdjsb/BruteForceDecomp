# Observed Xbox D3D device-global C11 declaration — 2026-10-22

## Source evidence and authority

Original Xbox Brute Force XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The original-x86-reviewed D3D command writers `0x00062170` and `0x00062230` both record an x86 load of a **pointer value** from Xbox virtual address `0x0037DD88`. This supports the existing source declaration `extern uint32_t *D3D8__D3D_g_pDevice;` for the recovered *global identity*, but does **not** establish the pointed-to object layout or the x86 behavior of other functions.

The shared declaration now belongs to `include/bf_xbox_d3d_device_x86.h`, rather than competing local declarations. Include it in a caller only where the existing draft visibly references this exact symbol. The header is for draft C11 syntax analysis; it is **not** a complete Xbox Direct3D runtime or native PC adapter.

## Function-specific changes committed directly to main

- `09ba90c37995b5c4648ff7e8d901c51256a9ee70`: creates the shared header; replaces duplicate declarations in `0x00062170` and `0x00062230`; includes it in ten additional D3D-related callers: `0x0036E030`, `0x0036E150`, `0x0036E990`, `0x0036EED0`, `0x00370B40`, `0x00371FA0`, `0x00372050`, `0x00372180`, `0x003736B0`, `0x00375280`.
- `e2bc551710cb775ac2c7195baafbbeb5ddb5c368`: six more source-matched D3D callers: `0x0036C8A0`, `0x0036CA20`, `0x0036CCF0`, `0x0036CD50`, `0x0036CDB0`, `0x0036D870`.
- `3ac4be6a67893a805bb44e8968595045e4b19319`: five more callers: `0x0036E2B0`, `0x0036E420`, `0x0036E5D0`, `0x0036E6E0`, `0x0036E800`.
- `a03d5ef90b4302ae15b5fbae4bf0c91830cbfa66`: ten additional callers: `0x0036F9F0`, `0x0036FA70`, `0x0036FB10`, `0x0036FF70`, `0x00370180`, `0x003701C0`, `0x00370200`, `0x00370260`, `0x003702E0`, `0x00370330`.
- `53e2d8a6870725304e0618d2c9be1e729b4b12ce`: six more D3D command writers: `0x00370380`, `0x00370420`, `0x003704B0`, `0x00370530`, `0x00370590`, `0x00370600`.

These patches add includes and one header only. They do not rewrite original Ghidra C instruction bodies, add unverified platform API prototypes, or change the original x86-body hashes.

## Completed exact-tree compiler evidence

- Commit `bebb0d68fcaf364b719e2b8a1958237fda0095f1`: **12,099 pass / 1,595 fail**, 13,694 function drafts audited.
- Commit `09ba90c37995b5c4648ff7e8d901c51256a9ee70`: **12,109 pass / 1,585 fail**.
- Commit `e2bc551710cb775ac2c7195baafbbeb5ddb5c368`: **12,115 pass / 1,579 fail**.
- Commit `3ac4be6a67893a805bb44e8968595045e4b19319`: **12,120 pass / 1,574 fail**; **0** embedded-original-body hash mismatches and **0** missing labels after the shared parser fix.
- Commit `a03d5ef90b4302ae15b5fbae4bf0c91830cbfa66`: **12,127 pass / 1,567 fail**. The remaining failures include unverified D3D render-state globals and the `LAB_00210000` label.
- The `53e2d8a6870725304e0618d2c9be1e729b4b12ce` batch still requires its exact-tree audit.

## Critical limitations for actual 1:1 reconstruction and a native PC build

1. **32-bit address width:** The original global at `0x0037DD88` stores a 32-bit Xbox virtual address. Host C `uint32_t *` is a 64-bit pointer on 64-bit systems. A successful host syntax check does not prove safe or equivalent dereferencing.
2. **Byte versus indexed offsets:** Ghidra expressions of the form `D3D8__D3D_g_pDevice + 0x17C8` in a byte-addressed x86 instruction cannot automatically become `uint32_t *` arithmetic by the same numeric offset; typed pointer arithmetic scales it by four. Validate every offset against the original x86 instructions before converting operations or claiming equivalence.
3. **Unknown D3D device layout:** Scalar word indexing seen in source drafts does not verify any C `struct` layout, lifetime rules, render-state behavior, or hardware backend.
4. **Unresolved Xbox APIs:** The D3D global's identity does not implement resource creation, command buffering, device lifetimes, Xbox push buffers, render-state translation, or a PC renderer. Those require separate observed-ABI adapters and runtime testing.
5. **Status:** `C11_Syntax_OK` is still distinct from `Xbox_ABI_Verified`, `Link_Verified`, `Semantics_Tested`, and `Native_PC_Playable`. **No D3D function is promoted to 1:1 solely by these header changes.**

All source changes are on `main`; an obsolete repair branch can remain on GitHub until manually deleted, but it is not the canonical source.
