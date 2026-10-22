/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A5E42FF111F1DB6E19A65A29022F1354CDCDDF4E123F29231CF8CDA8FEEE1F3
 * Entry: 0x002701e0, Ghidra index: 8783, label: FUN_002701e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004051e4;
extern uint32_t DAT_0040c6dc;
void FUN_002701e0(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  char *__src;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 uStack_8;
  char *local_4;
  
  if (in_EAX == (char *)0x0) {
    in_EAX = &DAT_004051e4;
  }
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (int)(pcVar3 + ((2 - (int)(param_1 + 1)) - (int)(in_EAX + 1)));
  __src = (char *)thunk_FUN_002ea01d(pcVar2);
  local_4 = __src;
  FUN_002eaa86(__src,param_1,in_EAX);
  pcVar3 = __src;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((char *)unaff_ESI[2] < pcVar3 + (unaff_ESI[3] - (int)(__src + 1))) {
    (**(code **)(*(int *)*unaff_ESI + 0x14))((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&param_1);
    unaff_ESI[3] = 0;
  }
  pcVar3 = __src;
  if ((char *)unaff_ESI[2] < pcVar2) {
    do {
      unaff_ESI[3] = unaff_ESI[2];
      _strncpy((char *)unaff_ESI[1],__src,unaff_ESI[2]);
      param_1 = __src + unaff_ESI[3];
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -(int)(param_1 + 1);
      (**(code **)(*(int *)*unaff_ESI + 0x14))
                ((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&uStack_8);
      unaff_ESI[3] = 0;
      __src = param_1;
      pcVar3 = local_4;
    } while ((char *)unaff_ESI[2] < pcVar2);
  }
  if (pcVar2 != (char *)0x0) {
    iVar4 = FUN_002eaa86(unaff_ESI[1] + unaff_ESI[3],&DAT_0040c6dc,__src);
    unaff_ESI[3] = unaff_ESI[3] + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(pcVar3);
}
