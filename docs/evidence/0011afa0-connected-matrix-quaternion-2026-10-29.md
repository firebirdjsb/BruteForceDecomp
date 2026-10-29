# 0x0011AFA0 -> 0x002339D0: connect original ECX matrix producer

Date: 2026-10-29. Scope: bounded C11 source/host-memory operation, not complete 1:1 behavior, native guest-ABI linkage or a new syntax pass.

Previously authenticated original Brute Force XBE identity is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No private XBE bytes were available for reauthentication in this pass. Earlier XBE evidence and complete six-body digests remain documented in [the scalar storage repair](0011afa0-scalar-storage.md).

The documented caller instruction setup binds the first `0x002339D0` ECX to guest `[self+0x3E8]+0x14` and the second ECX to the 48-byte matrix local at F+0x78. The outputs are the four-F32 arrays at F+0x50 and F+0x64 respectively; both are disjoint from their corresponding input matrices. The existing callee source reads nine F32 matrix components and writes four F32 quaternion components. The new shared `bf_002339d0_quaternion_operation` reuses that C arithmetic for the original entry wrapper and both documented caller sites, eliminating the caller's two zero-argument calls to the draft's unbound `in_ECX`. The original entry wrapper still has an intentionally unbound ECX placeholder for other callers; no global/register convention is invented.

The first caller's guest32-to-host pointer cast is explicitly **ABI_UNVERIFIED** and is not a valid general Windows/Linux/Android guest memory implementation. Exact x87 `FSQRT` precision/control/status and F32 rounding (the operation currently uses host `sqrtf`), exceptional inputs, NaNs, signed-zero behavior, fault order and all indirect calls remain unverified. This is an instruction-supported storage/input association, **not** whole-function 1:1 approval.

The new standalone finite-case regression covers positive and negative trace branches, four source matrices (identity, rotations around each axis) and 16-byte output guard words at `-O0` and `-O2`. The existing caller scalar-storage verifier is updated to require the two connected calls and also executes that standalone fixture. Its earlier scalar, SIMD and copying checks remain intact. The two C-source SHA-256 inventory rows are updated; original x86 body labels, entry signatures, origin, ABI and behavior flags remain unchanged.

The subsequent `0x0012B250` blend (ECX=F+0x40, EDX=F+0x64) and `0x002333B0` output (EDX=self+0x37c), and the x87 scalar producer `0x00306C80`, remain separate unverified contracts. Do not count them as connected. Revert the atomic source/header/test/metadata change to roll back; no executable, private XBE, assets, deployment, or game state changed.

Reported baseline before the edit: 13,633/13,694 syntax passes; 61 failing. **No syntax increase is claimed** because both edited C files already passed.
