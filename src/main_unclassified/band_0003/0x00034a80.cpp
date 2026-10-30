/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CC1F3AE1278360F47ECDD371E9A1973D82FCF93FB388FD21627BD17F4F6ED62
 * Entry: 0x00034a80, Ghidra index: 345, label: FUN_00034a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_000480f0(void);

undefined4 FUN_00034a80(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = FUN_000120f0();
  if (((*(ushort *)(in_ECX + 0x852) & 0x8000) == 0) &&
     ((*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a8) & 4) != 0)) {
    uVar2 = FUN_000480f0(in_ECX + 0x850);
    return uVar2;
  }
  return 2;
}
