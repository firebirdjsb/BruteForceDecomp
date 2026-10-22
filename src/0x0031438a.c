/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55399D72222863570FF30C27F0E8D48DA091798EC85BA2922FC41A70F4825CAD
 * Entry: 0x0031438a, Ghidra index: 12057, label: FUN_0031438a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_FUN_003869ec;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int FUN_0031438a(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  cVar1 = DSOUND__DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    puVar3 = (undefined4 *)FUN_003118df(0xdc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 1;
      *puVar3 = &PTR_FUN_003869ec;
    }
    iVar2 = (-(uint)(puVar3 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
    *(undefined4 **)(param_1 + 0x1c) = puVar3;
    if ((-1 < iVar2) && (iVar2 = FUN_00314325(param_2), -1 < iVar2)) {
      iVar2 = FUN_003118df(0x160);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_003193d4(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),
                             *(undefined4 *)(param_1 + 0x1c));
      }
      iVar2 = (-(uint)(iVar4 != 0) & 0x7ff8fff2) + 0x8007000e;
      *(int *)(param_1 + 0x20) = iVar4;
      if ((-1 < iVar2) && (iVar2 = FUN_00319858(), -1 < iVar2)) {
        FUN_00312e7f(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
      }
    }
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}
