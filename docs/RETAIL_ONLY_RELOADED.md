# Retail-only boundary for BruteForce: Reloaded

**Canonical reconstruction evidence:** the original retail Xbox `default.xbe` with
SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Demo, trial, preview, kiosk, prototype and promotional builds are **not**
substitutes for this XBE when verifying original addresses, instructions,
calling conventions, function bodies or behavior.

## Separate deliverables

- **BruteForceDecomp** preserves all original retail-address functions and
  evidence, including dormant or unreachable routines. Do not delete or rewrite
  a retail function merely because its name or behavior appears demo-related.
  Preserve original body hashes and `ABI_UNVERIFIED` status until verified.
- **BruteForce: Reloaded** must not ship demo-only executable code, missions,
  maps, characters, textures, sounds, videos, UI, trial timers, splash screens,
  unlock limits or promotional resources. A demo-only exclusion belongs to the
  native-port build/package boundary, not to destructive edits in the canonical
  retail decompilation.

## Evidence before exclusion

A candidate is **not** demo-only solely because of a string, label, symbol,
unused branch, dead code, or appearance in a third-party demo. Record the
retail-XBE address (if any), exact binary/asset provenance, reachability,
callers and dependencies, and why the content is exclusively demo-related.
Preserve shared retail functionality and platform dependencies. An exclusion
requires independent review and regression tests of retail gameplay and
cross-function linkage. Unknown classifications remain quarantined.

## Release gate (not yet implemented)

Once a native PC build/package pipeline exists, generate a complete manifest of
linked objects and packaged assets, compare it to the reviewed demo-only deny
set, and fail release packaging on any match. Audit dynamically loaded resources
and indirect dispatch too; a clean source grep is not sufficient. Keep a
retail-feature regression suite and record the exact build SHA. Until those
checks exist and pass, do **not** claim the final game is demo-free.

This document establishes a policy, **not** a claim that any demo-only retail
code has been identified or excluded. Do not commit copyrighted retail assets
or original XBE bytes to the repository.
