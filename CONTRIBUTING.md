# Contributing to BruteForceDecomp

This **public** evidence-led project aims to reconstruct the original Xbox *Brute Force* game as a **native PC application**, then modernize it. Contributions are welcome, but **none of the C++17 syntax work alone makes the game playable**.

## Collaborating on main

1. Pick a scope and open a [GitHub issue](https://github.com/firebirdjsb/BruteForceDecomp/issues) to coordinate function ranges, ABI dependencies or Xbox-to-PC platform adapters.
2. Fork the repository or make a **temporary branch**, then open a [pull request to `main`](https://github.com/firebirdjsb/BruteForceDecomp/pulls). `main` is the sole long-lived canonical branch. Delete merged temporary branches.
3. Preserve original entry identities and body SHA-256 labels in canonical `.cpp` source; respect the deterministic [source layout](tools/source_layout.py). Do **not** assign speculative gameplay subsystem names.
4. Ground any behavior, types, offsets and calling conventions in the original x86 bytes/caller evidence. Clearly mark unresolved details `ABI_UNVERIFIED`/`TODO`.
5. Identify the precise verification level: strict host C++17 syntax; Windows i386 target; x86 evidence; cross-function linking; tested game behavior. Never call unlinked, untested code a 1:1 port.

## Checks

On a local checkout with Python 3, Git and Clang:

```sh
python3 tools/test_source_layout.py
python3 tools/test_body_hash_labels.py
python3 scripts/check_sources.py
python3 tools/check_repository_safety.py
python3 tools/test_progress.py
```

For the canonical C++17 per-function syntax inventory:

```sh
python3 tools/sweep_cpp_compat.py --root . --out cpp_compat_results --jobs 8
```

See [migration and fidelity gates](docs/CPP_MIGRATION.md).

Expected syntax failures are reported, not silently repaired. PR checks are intentionally read-only and do not have the user's Xbox executable.

## Forbidden content

**Never commit or attach** the original retail XBE, ISO, commercial game assets or extracted chunks, full decompiler/Ghidra exports or databases, game keys, user-private directories, personal information, authentication cookies, GitHub tokens, API credentials or private keys. The user-owned original XBE stays outside the repository. Cite original entry addresses, body digests and narrowly quoted instruction evidence instead of uploading copyrighted dumps.

Do not paste a live secret in an issue or PR. Report through [SECURITY.md](SECURITY.md) and rotate any leaked credential; deleting a file does not erase history.

## PR checklist

- [ ] Correct original entry address(es) and x86 body SHA-256 provenance
- [ ] No invented field layouts, prototypes, hidden register dependencies or game behavior
- [ ] Tests and evidence supplied; remaining ABI/runtime blockers documented
- [ ] No copyrighted binary, complete pseudocode export, credentials or personal paths
- [ ] Changes target `main`; temporary branch removed after merge

## License

There is no established open-source license in this repository. **Being public on GitHub does not itself grant permission to redistribute or relicense its contents or commercial assets.** Discuss contribution/redistribution terms with the maintainer before relying on such rights.
