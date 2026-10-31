/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5824ED317BF7DE223A9EBA3964BF341F73BA4E11ADBE2096820739E09BAC742
 * Entry: 0x0010fef0, Ghidra index: 3545, label: FUN_0010fef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010fef0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1ec) != in_EAX) {
    // XBE 0x0010FF04: ESI=ECX+0x1E8, PUSH EAX, caller ADD ESP,4; ABI_UNVERIFIED.
    FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1e8), static_cast<std::uint32_t>(in_EAX));
  }
  return;
}
