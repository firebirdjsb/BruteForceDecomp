/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C25C29A1D169AD70046F475BB5284E44ACA01D63A162C813CF67F6711C890BF8
 * Entry: 0x000c2160, Ghidra index: 2366, label: FUN_000c2160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000c2330(void);

extern uint32_t DAT_00469aac;
void FUN_000c2160(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)0x0;
  if (*(undefined4 **)(DAT_00469aac + 0xec) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)**(undefined4 **)(DAT_00469aac + 0xec);
  }
  puVar1 = *(undefined4 **)(DAT_00469aac + 0xec);
  do {
    if (puVar3 == puVar1) {
      return;
    }
    iVar2 = puVar3[2];
    if ((((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) &&
        (*(char *)(iVar2 + 0x7a) == '\x02')) && ((*(byte *)(iVar2 + 0x70) & 1) == 0)) {
      puVar5 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x68);
      }
      for (; puVar5 != *(undefined4 **)(param_1 + 0x68); puVar5 = (undefined4 *)*puVar5) {
        iVar4 = puVar5[2];
        if (*(int *)(iVar4 + 0x44) == iVar2) goto LAB_000c21c7;
      }
      iVar4 = FUN_000c2330();
LAB_000c21c7:
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x48) = 0x3f4ccccd;
      }
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
