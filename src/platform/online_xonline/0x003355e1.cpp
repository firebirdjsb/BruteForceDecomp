/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47EFB0ED57EDB3C0B4C284AF48EF56237D2B49E7F6A403B827C4088252B8A9C2
 * Entry: 0x003355e1, Ghidra index: 12431, label: FUN_003355e1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003355e1(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  do {
    while( true ) {
      puVar3 = puVar1;
      if (puVar3 == (undefined4 *)0x0) {
        return local_c;
      }
      local_c = FUN_00330c3e(*puVar3);
      if (local_c != 0) break;
      puVar1 = (undefined4 *)puVar3[1];
      local_14 = puVar3;
    }
    if (((local_c == 0x1500f0) &&
        (local_c = FUN_003385e8(*puVar3,0,0,0,0,&local_10,0), -1 < local_c)) && (local_10 != 200)) {
      local_c = -0x7fffbffb;
    }
    puVar1 = (undefined4 *)puVar3[1];
    if (local_14 == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x18) = puVar1;
    }
    else {
      local_14[1] = puVar1;
    }
    FUN_00330c53(*puVar3);
    iVar2 = puVar3[2];
    if (puVar3[3] == 0) {
      if (iVar2 != 0) {
        thunk_FUN_0033e986(iVar2,0x20);
      }
      thunk_FUN_0033e986(puVar3,0x8021);
    }
    else {
      if (iVar2 != 0) {
        FUN_0033ea20(iVar2);
      }
      FUN_0033ea20(puVar3);
    }
  } while (-1 < local_c);
  return local_c;
}
