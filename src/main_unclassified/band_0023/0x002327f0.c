/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59108B00EDB7EC5B7734FE621CEDBDE5C3381E6750581EABD24E1DC081340024
 * Entry: 0x002327f0, Ghidra index: 7768, label: FUN_002327f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t DAT_0046d100;
void FUN_002327f0(void)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  float local_8;
  byte bStack_4;
  
  local_8 = *(float *)(in_EAX[0x8a] + 0xcc);
  cVar3 = (**(code **)(*in_EAX + 0x15c))();
  fVar1 = local_8;
  if (cVar3 != '\0') {
    fVar1 = *(float *)(in_EAX[0x8a] + 0xd0);
  }
  in_EAX[0xa3] = 0;
  *(byte *)(in_EAX + 0x89) = *(byte *)(in_EAX + 0x89) & 0xfb;
  bVar2 = false;
  in_EAX[0x86] = (int)(1.0 / fVar1);
  if ((in_EAX[0x6c] != 0) && (iVar4 = FUN_00120d40(), iVar4 == 1)) {
    bVar2 = true;
  }
  if ((*(int *)(in_EAX[0x8a] + 0x114) != DAT_0046d064) && (!bVar2)) {
    cVar3 = FUN_0022dcc0();
    if (cVar3 != '\0') {
      FUN_0017c020(&DAT_0046d100);
      return;
    }
    bStack_4 = bStack_4 & 0xfc;
    iVar4 = FUN_0017beb0(in_EAX[0x8a] + 0x114);
    if (iVar4 != 0) {
      FUN_00178e50(&local_8);
    }
  }
  return;
}
