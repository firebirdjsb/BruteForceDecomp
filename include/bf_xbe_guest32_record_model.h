/* Brute Force x86 guest32 model: syntax-only dependencies, not a host ABI.
 * REQUIRES ORIGINAL-XBE VERIFICATION BEFORE NATIVE LINKAGE.
 * The project has no implementation here for reading/writing emulated guest VA.
 * Do not implement these as raw host-pointer casts. ABI_UNVERIFIED. */
#ifndef BF_XBE_GUEST32_RECORD_MODEL_H
#define BF_XBE_GUEST32_RECORD_MODEL_H
#include <cstdint>

// Runtime guest-address translation is intentionally unresolved/unimplemented.
std::uint32_t bf_guest_read_u32(std::uint32_t guest_va);
void bf_guest_write_u32(std::uint32_t guest_va, std::uint32_t value);

// Explicit host-side guest-register models, NOT original Xbox C++ prototypes.
void FUN_0008f6e0(std::uint32_t guest_edx);
void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

#endif
