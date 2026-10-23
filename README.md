# Brute Force — Original Xbox Static Reconstruction (C11)

<!-- BF_PROGRESS_START -->
## Reconstruction progress

[![C11 source audit](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/full-c11-inventory.yml/badge.svg?branch=main)](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/full-c11-inventory.yml)

![C11 source syntax coverage: 90.48%](docs/progress/c11-syntax.svg)

**90.48% C11 syntax coverage** · **12,391 / 13,694** individually checked functions · **1,303** still fail. [Exact audited commit](https://github.com/firebirdjsb/BruteForceDecomp/commit/051b2e93078eb762e11c799422e715cf7864a3fe) · [GitHub Actions report](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39992327184).

**Native PC game: NOT buildable/playable yet.** A syntax pass is not Xbox ABI verification, cross-function linking, platform compatibility, or a 1:1 match. This percentage is **not** game-completion percentage.

[Machine-readable progress](docs/progress/current.json) · [Detailed status](docs/STATUS.md) · [Native PC milestones](docs/NATIVE_PC_PORT_GOALS.md)

<!-- BF_PROGRESS_END -->

Public, evidence-driven research workspace for the original Xbox 32-bit x86 `default.xbe`. This is a **source reconstruction**, not original source code or a proven byte-identical reimplementation.

## Baseline

- Game: Brute Force (original Xbox), provided XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`
- Ghidra identified **13,694** functions; all 13,694 were exported to the user's local `FunctionExport` directory. These counts are Ghidra discoveries, **not** proof of complete code recovery.
- Input migration archive contains **103 unverified legacy C++ drafts**. These must be reviewed and migrated to **C11**, not mechanically relabeled as `.c`.

## Rules

1. All *new and active* reconstructed source lives in `src/` and uses **C11** (`.c`, `.h`), not C++.
2. Preserve provenance: x86 entry address, original function-body SHA-256, evidence limitations, and TODOs for unknown ABI/external calls.
3. Keep uncertain code marked `DRAFT`, `ABI_UNVERIFIED`, or `REVIEW_REQUIRED`; compilability does not imply correctness or byte equivalence.
4. Never commit the original executable, game assets, ISOs, Ghidra project databases, full decompiler dumps, private local paths, or authentication credentials. Git stores small metadata, scripts and carefully scoped reconstructions only.
5. Review every generated change. Keep a function-by-function audit trail and test C syntax before marking any draft buildable.

## End goal: native PC game

The long-term objective is a **faithful, natively executable PC Brute Force reconstruction** followed by optional high-refresh-rate rendering, widescreen and HD texture support, 64-player multiplayer, and modding. These are future deliverables, **not present features**. See [the native PC port goals and validation gates](docs/NATIVE_PC_PORT_GOALS.md).

## Collaborate

This public repository accepts [issues](https://github.com/firebirdjsb/BruteForceDecomp/issues) and [pull requests](https://github.com/firebirdjsb/BruteForceDecomp/pulls). See [CONTRIBUTING.md](CONTRIBUTING.md) for function-by-function evidence requirements and [SECURITY.md](SECURITY.md) for sensitive reporting. `main` is the only long-lived branch; short-lived feature branches and forks are allowed. **Public visibility does not by itself grant an open-source license.**

## Getting started

Clone `https://github.com/firebirdjsb/BruteForceDecomp.git` to Windows. Keep the existing `D:\Downloads\BruteForce-Decompilation` directory as the *local evidence store*, outside this Git checkout. See `AGENTS.md` and `docs/STATUS.md` for workflow, and the companion C-only local viewer/runner package for continued work.

**Never upload copyrighted Xbox game binaries, ISO files, assets, full Ghidra dumps, or credentials to this public repository.**
## Browsing recovered functions

The C11 source tree is now organized by **observed XBE sections**, unclassified main-executable address bands, and the small list of [assembly-supported readable names](metadata/asm_supported_readable_names.csv). Start at [src/README.md](src/README.md). All **13,694** files keep their original x86 address filename and original function-body digest. `tools/source_layout.py` is the canonical path resolver used by C11 audits and provenance checks. Directory organization is **not** a native PC build or proof of 1:1 behavior.
