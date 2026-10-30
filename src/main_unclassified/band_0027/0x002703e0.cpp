/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CEB57BE7B38ECE43B10EC97C0CC1E201EA52D4A9BD4BCBF4743C31B946617D3
 * Entry: 0x002703e0, Ghidra index: 8785, label: FUN_002703e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c6dc;
undefined4 FUN_002703e0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 uVar4;
  int local_204;
  char local_200 [512];
  
  uVar4 = 0;
  FUN_002eaa86(local_200);
  pcVar2 = local_200;
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
