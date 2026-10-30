/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC6CA38C3B724A5E350F2BB600711C12EC2915AE0424AC10478DF925F062AEC2
 * Entry: 0x0008b6e0, Ghidra index: 1678, label: FUN_0008b6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0008a720(undefined4 *param_1,int *param_2);
extern undefined4 FUN_0008a920(int *param_1);
extern void FUN_0005bd20(int param_1);

extern uint32_t DAT_0046d064;
char FUN_0008b6e0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *unaff_ESI;
  char local_1;
  
  if ((in_EAX == 0) || (iVar1 = *(int *)(in_EAX + 0xc), iVar1 == 0)) {
    return '\0';
  }
  if (unaff_ESI[4] != 0) {
    if ((*(byte *)(unaff_ESI + 0x1b) & 0x40) == 0) {
      return '\0';
    }
    if (*(int *)(iVar1 + 8) != *unaff_ESI) {
      return '\0';
    }
    FUN_0008a720(unaff_ESI,in_EAX);
    return '\0';
  }
  if (*unaff_ESI == DAT_0046d064) {
    *(byte *)(unaff_ESI + 0x1b) = *(byte *)(unaff_ESI + 0x1b) | 0x40;
  }
  else {
    if (((*(byte *)(unaff_ESI + 0x1b) & 4) == 0) && (*(int *)(iVar1 + 8) == *unaff_ESI)) {
      local_1 = FUN_0008a720(unaff_ESI,in_EAX);
      *(byte *)(unaff_ESI + 0x1b) = *(byte *)(unaff_ESI + 0x1b) & 0xfb;
      goto LAB_0008b74a;
    }
    cVar2 = FUN_0008a920(unaff_ESI);
    if (cVar2 == '\0') {
      return '\0';
    }
  }
  local_1 = FUN_0008a720(unaff_ESI,in_EAX);
LAB_0008b74a:
  if (local_1 == '\0') {
    return '\0';
  }
  FUN_0005bd20(unaff_ESI[10]);
  return local_1;
}
