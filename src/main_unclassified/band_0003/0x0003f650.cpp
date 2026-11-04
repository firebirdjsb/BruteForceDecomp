/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DB251178CC1A30E196F4EFB2EA11E1D7EEFCEE3CA811F781E0E42083E7FB643
 * Entry: 0x0003f650, Ghidra index: 478, label: FUN_0003f650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_dword_operations.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

void FUN_0003f650(void)

{
  int iVar1;
  int in_ECX;
  
  uint32_t guest_eax_bits = static_cast<uint32_t>(in_ECX) - UINT32_C(0x40);
  iVar1 = FUN_000120f0(*bf_x86_signed_dword_view(&guest_eax_bits));
  *(undefined4 *)(in_ECX + 0x880) = 1;
  *(undefined4 *)(in_ECX + 0x87c) = 0x26;
  *(undefined1 *)(in_ECX + 0x874) = 0;
  iVar1 = *(int *)(iVar1 + 0x1f8);
  if ((((iVar1 == 0x25) || (iVar1 == 0x26)) || (iVar1 == 0x27)) ||
     ((iVar1 == 0x29 || (iVar1 == 0x28)))) {
    *(undefined1 *)(in_ECX + 0x874) = 1;
  }
  return;
}
