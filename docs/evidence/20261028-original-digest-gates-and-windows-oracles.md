# Original digest gates and Windows host-oracle runners

The new 0x0011C810 tooling had two mistyped body digests. Source-only CI
passed because those constants were checked only when the private XBE was
provided. The matrix-frame gate and three dependent gates failed with the
user's pinned original XBE before any source repair was attempted.

The whole XBE SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Fresh section-mapped body hashing agrees with existing canonical source,
inventory and shared instruction-verifier records:

| Entry | Original bytes | Actual original SHA-256 |
| --- | ---: | --- |
| `0x0001D0C0` | 594 | `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4` |
| `0x0012B2A0` | 93 | `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E` |

Only incorrect verifier/documentation copies are corrected. No original
source-body identity, inventory body hash or executable byte is changed.
The matrix-frame runner now cross-checks its registry against source body
labels even without a private XBE. A public test rejects an independently
mutated digest for each of its three entries. This detects registry drift;
source-label agreement alone does not authenticate original binary bytes.

## Host runner repairs

The local Windows LLVM toolchain also exposed unrelated runner portability
errors: ELF-only assembly metadata and System V pointer registers in two
x87 references, and Unix `-lm` linker arguments on the MSVC target.

The assembly references retain their original arithmetic, instruction order
and result decisions. Conditional adapters select Windows x64 volatile
RCX/RDX/R8 pointers or the existing System V RDI/RSI/RDX pointers. ELF
type/size/stack-section metadata is emitted only for the existing ELF path;
Windows uses COFF read-only constant storage. Math-library flags are omitted
on Windows, where these functions are supplied by the existing C runtime.
The two nested matrix-frame invocations also forward the explicitly selected
Clang path, so private verification does not depend on Clang being on PATH.
No emulator, new dependency, game entry bridge or Xbox behavior is introduced.

The existing 0x0010FBF0 C projection deliberately refuses execution on hosts
without its supported 80-bit `long double` proxy. Its test previously required
numeric success on every host, contradicting that refusal. The unsupported
branch now checks 1,024 deterministic normal-input refusals, two guest reads,
zero writes and unchanged output sentinels. Its output explicitly says the
numeric oracle was skipped. Supported hosts retain the original complete
numeric and source-link tests unchanged; no arithmetic substitute is added.
Sanitizer subprocesses also retain the inherited process environment.

## Verification and limits

All seven affected host runners pass locally with the pinned original XBE
after these corrections: matrix frame, source register links, second vector,
virtual call link, original vector lanes, threshold reset and scalar projection.
The threshold runner executes the native x87 comparison reference on Windows;
the scalar runner explicitly tests unsupported-host rejection there. Public
CI retains the supported numeric-oracle path and tests the new digest guard.
No new diagnostic suppression or original-game source change is part of this
verification-tool correction. Whole caller ABI, original x87/MXCSR/exception
state and game equivalence remain unverified. No deployment, original asset
or production process was touched. Rollback restores the affected verifier,
test and reference files together; it must not alter the pinned identities.
