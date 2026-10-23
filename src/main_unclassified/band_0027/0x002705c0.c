/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A610117C763C33A0AFCB4F63C57C3DD0EB3626780C6536720C69DF87B1641C6F
 * Entry: 0x002705c0, Ghidra index: 8788, label: FUN_002705c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002705c0(void)

{
  char cVar1;
  undefined4 *in_EAX;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 uVar4;
  int local_260;
  undefined4 local_25c;
  undefined4 local_248;
  undefined4 local_23c;
  undefined4 local_234;
  undefined4 local_22c;
  undefined4 local_220;
  undefined4 local_210;
  char local_208 [516];
  
  local_22c = in_EAX[2];
  local_23c = in_EAX[7];
  local_210 = in_EAX[4];
  uVar4 = 0;
  local_25c = in_EAX[1];
  local_248 = in_EAX[6];
  local_234 = in_EAX[3];
  local_220 = *in_EAX;
  FUN_002eaa86(local_208);
  pcVar2 = local_208;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((char *)unaff_ESI[2] < pcVar2 + (unaff_ESI[3] - (int)(local_208 + 1))) {
    uVar4 = 0;
    (**(code **)(*(int *)*unaff_ESI + 0x14))((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&local_260)
    ;
    if (local_260 != unaff_ESI[3]) {
      uVar4 = 0x80004005;
    }
    unaff_ESI[3] = 0;
  }
  iVar3 = FUN_002eaa86();
  unaff_ESI[3] = unaff_ESI[3] + iVar3;
  return uVar4;
}
