/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBF130C833D412FDE655F7E3E0877384628C1B8B798DE58B02B7B6B00B4A8517
 * Entry: 0x0028a050, Ghidra index: 9153, label: FUN_0028a050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
int FUN_0028a050(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = (*DAT_00469888 - DAT_00469888[1]) + -0x10 >> 4;
  if (-1 < iVar2) {
    piVar3 = (int *)(iVar2 * 0x10 + DAT_00469888[1]);
    do {
      iVar1 = *piVar3;
      if ((((iVar1 == -8) || (iVar1 == -9)) || (iVar4 = in_EAX, iVar1 == -10)) &&
         (iVar4 = in_EAX + -1, in_EAX == 0)) {
        return ((iVar2 << 4) >> 4) + 1;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -4;
      in_EAX = iVar4;
    } while (-1 < iVar2);
  }
  return 0;
}
