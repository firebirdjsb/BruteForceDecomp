/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A26741535E9A882949AD54EC36806FCDC706EEF23E195EC7834225F965263FF
 * Entry: 0x0007af90, Ghidra index: 1461, label: FUN_0007af90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_002e5a70(void);
extern void FUN_00330020(void);
extern void FUN_00330045(void);
extern void FUN_00330050(void);
extern void FUN_0033002b(void);

void FUN_0007af90(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_1cc [4];
  undefined4 local_1c8 [113];
  
  cVar1 = FUN_002e5a70();
  if (cVar1 != '\0') {
    puVar3 = local_1c8;
    for (iVar2 = 0x70; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar4 = 0;
    puVar3 = local_1c8;
    iVar2 = XONLINES__XOnlineLogon(puVar3,0,0,0,local_1cc);
    if (iVar2 == 0) {
      do {
        iVar2 = FUN_00330020(uVar4);
      } while (iVar2 == 0);
      iVar2 = FUN_00330045(uVar4);
      if (iVar2 == -0x7feaeffe) {
        FUN_00330050(0);
      }
      FUN_0033002b(puVar3);
    }
  }
  return;
}
