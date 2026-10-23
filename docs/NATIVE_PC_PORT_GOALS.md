# Long-term target: native modern-PC Brute Force reconstruction

**Objective (not current status).** Rebuild the original Xbox game as a **native PC executable**, with its game logic reconstructed faithfully from the user's retail XBE and later extended through cleanly separated PC platform backends. The outcome is not an emulator, a wrapper that still requires Xbox execution, or a collection of unrelated C files. The end state should be a buildable, runnable, testable and moddable PC game.

This document records **requested goals**, not implemented functionality, recovered original-source ownership, or claims of behavior/byte equivalence. Follow [AGENTS.md](../AGENTS.md), especially the requirements not to invent x86 ABI behavior, game systems, or semantic function names. Preserve the original XBE identity `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Non-negotiable stages and gates

1. **Exact-evidence reconstruction.** Keep every one of the 13,694 currently discovered functions anchored to its x86 entry and original body SHA-256. Recover exact control flow, data movement, registers, stack cleanup, caller/callee dependencies, struct layout and imports from original disassembly. Compiler success alone does not verify the function. Mark every uncertain model `DRAFT`/`ABI_UNVERIFIED`; maintain individually testable proofs.
2. **Native linkable core.** Establish a shared C11 interface with consistent definitions, explicit 32-bit pointer/address representations and verified calling contracts. Resolve function/data symbols and duplicate definitions. Link modules, add x86 host tests and behavioral differential tests against evidence before advancing verified states. Do not silently use a host pointer to stand in for an Xbox 32-bit address.
3. **Xbox-to-PC platform boundary.** Inventory Xbox kernel/XAPI/XInput/Direct3D 8/audio/storage/networking/online dependencies from the actual XBE. Replace them at well-defined seams with native adapters, keeping the game logic separate. Any SDK/API signature must be source-verified, and original entry identities must remain traceable.
4. **Playable PC baseline.** Produce a Windows PC build with startup, controls, UI, level/loading lifecycle, save/load, physics, gameplay, video, sound and multiplayer behavior verified end to end. Fix determinism and state lifetime defects before adding enhancements. A successful C11 syntax inventory is not this milestone.
5. **Modernization** behind reversible/configurable settings rather than rewriting original logic without tests:
   - **High refresh and frame pacing:** independent simulation/animation and presentation rates; measure and correct any frame-dependent physics, movement, timers, particles and audio.
   - **Widescreen and resolution scaling:** aspect-correct camera/FOV, HUD and menus including ultrawide; support high resolutions and modern APIs (e.g. Direct3D 12 or Vulkan as implementation choices, not assumptions about the original renderer).
   - **HD textures and visual enhancements:** optional asset replacement/loading pipeline, high-resolution materials and filters; maintain original-asset fallback, and do not commit commercial game assets.
   - **Expanded multiplayer including a 64-player goal:** first recover existing netcode and authoritative state, protocol, session limits and replication. Then design and load-test the 64-player mode, with bandwidth, security, deterministic simulation, network prediction, scalability and map/gameplay implications. **Do not assume a player-count constant change achieves this.**
   - **Modding:** stable versioned C-facing plugin/data interfaces, content and scripting extension points, safe asset overrides and diagnostic hooks, without making the original game's internal layouts a public ABI by accident.

## Evidence and release discipline

- Use explicit statuses `C11_Pending` → `C11_Draft` → `C11_Syntax_OK` → `Reviewed` → `Semantics_Tested`. Maintain independent Xbox-ABI, cross-function link and PC-behavior gates.
- Run repo-wide compiler checks after each focused repair pass; add 32-bit and then 64-bit builds with an explicit boundary for address translation. Record the exact audited commit, counts and exceptions.
- Test original gameplay behavior separately from optional PC enhancements. Run regressions for asset loading, input, save compatibility, all levels and multiplayer edge cases.
- The repository is **public**, but remains source/evidence-only: **never commit** the retail XBE, complete decompiler export, Ghidra database, ISO, copyrighted assets, credentials or user-local secrets. Public visibility does not imply a redistribution license. Verify contribution and redistribution rights before publishing a finished game or assets.

**Current state:** static, mostly unreviewed function-by-function C11 reconstruction with host syntax failures and unresolved register/stack ABI. The native executable and modern enhancements have **not yet been achieved**.
