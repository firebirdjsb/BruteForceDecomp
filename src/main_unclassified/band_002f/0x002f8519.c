/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A4D7665A07C98FA3FBCFB6BB98C2B953B89940AC0B4BB47C3F909B23E4A75DA
 * Entry: 0x002f8519, Ghidra index: 10951, label: XGetAVPack
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetAVPack(void)

{
  /* Xbox x86: mov eax,[0x00386570]; mov eax,[eax]. Guest VA, not a host pointer. */
  return *(undefined4 *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386570);
}
