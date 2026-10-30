/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81FFF5AFF936A17577551174ECDCFCFE36A279377494D773A11BB1B539227D85
 * Entry: 0x00293f40, Ghidra index: 9274, label: FUN_00293f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00293f40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_EAX;
  int *piVar6;
  int in_ECX;
  int *unaff_EDI;
  
  piVar6 = (int *)FUN_00293c90();
  if (*piVar6 != -6) {
    piVar6[4] = *in_EAX;
    piVar6[5] = in_EAX[1];
    piVar6[6] = in_EAX[2];
    piVar6[7] = in_EAX[3];
    return;
  }
  iVar1 = in_EAX[1];
  iVar2 = in_EAX[2];
  iVar3 = *in_EAX;
  iVar4 = in_EAX[3];
  if (*(int *)(in_ECX + 0xc) * 2 < *(int *)(in_ECX + 0x10) * 3) {
    FUN_00293e60();
    piVar6 = (int *)FUN_00293c90();
  }
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  *piVar6 = *unaff_EDI;
  piVar6[1] = unaff_EDI[1];
  piVar6[2] = unaff_EDI[2];
  iVar5 = unaff_EDI[3];
  piVar6[4] = iVar3;
  piVar6[3] = iVar5;
  piVar6[5] = iVar1;
  piVar6[6] = iVar2;
  piVar6[7] = iVar4;
  return;
}
