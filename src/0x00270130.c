/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFB065D82218455A5B945A2F341841C7247E72DA41F3F01FDF02F54276D37864
 * Entry: 0x00270130, Ghidra index: 8782, label: FUN_00270130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004051ec;
extern uint32_t DAT_0040c6dc;
undefined4 FUN_00270130(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  undefined4 *unaff_ESI;
  undefined4 uVar4;
  int local_204;
  char local_200 [512];
  
  uVar4 = 0;
  if (*in_ECX == '\0') {
    iVar3 = -(int)in_EAX;
    do {
      cVar1 = *in_EAX;
      in_EAX[(int)(local_200 + iVar3)] = cVar1;
      in_EAX = in_EAX + 1;
    } while (cVar1 != '\0');
  }
  else {
    FUN_002eaa86(local_200,&DAT_004051ec);
  }
  pcVar2 = local_200;
  *in_ECX = '\x01';
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((char *)unaff_ESI[2] < pcVar2 + (unaff_ESI[3] - (int)(local_200 + 1))) {
    uVar4 = 0;
    (**(code **)(*(int *)*unaff_ESI + 0x14))((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&local_204)
    ;
    if (local_204 != unaff_ESI[3]) {
      uVar4 = 0x80004005;
    }
    unaff_ESI[3] = 0;
  }
  iVar3 = FUN_002eaa86(unaff_ESI[1] + unaff_ESI[3],&DAT_0040c6dc,local_200);
  unaff_ESI[3] = unaff_ESI[3] + iVar3;
  return uVar4;
}
