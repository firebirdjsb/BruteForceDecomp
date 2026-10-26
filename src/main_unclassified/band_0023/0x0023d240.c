/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B216BC764B023224B4A87F6970B2C48788E24296FBA1899A0E990A7E7A6D1A9
 * Entry: 0x0023d240, Ghidra index: 7953, label: FUN_0023d240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
int * FUN_0023d240(int *param_1,undefined4 param_2,int param_3,undefined4 incoming_scalar_word)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *heap_node;
  int in_ECX;
  float incoming_scalar;
  undefined1 local_30 [36];
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_1;
  FUN_0023d460(param_1);
  param_1 = (int *)0x0;
  piVar5 = (int *)0x0;
  if ((in_ECX == 0) || (cVar3 = FUN_0023c4e0(&param_1), piVar5 = param_1, cVar3 == '\0')) {
    return piVar5;
  }
  if (in_EAX == 0) {
    in_EAX = *(int *)(iVar2 + 0x38);
  }
  iVar1 = *(int *)(iVar2 + 0x20);
  local_4 = *(undefined4 *)(iVar1 + 0x40);
  param_2 = *(undefined4 *)(iVar1 + 0x3c);
  local_c = *(undefined4 *)(iVar1 + 0x38);
  local_8 = (float)param_2;
  /* 0x23d285 loads the incoming fourth DWORD as m32fp; 0x23d2c6
   * forwards its unchanged bits by MOV/PUSH on the selected path. */
  memcpy(&incoming_scalar,&incoming_scalar_word,sizeof incoming_scalar);
  if (!(incoming_scalar < 0.0f)) {
    uVar4 = FUN_0023d150(iVar2,incoming_scalar_word);
  }
  else {
    uVar4 = FUN_0023d1a0(iVar2);
  }
  FUN_002333b0(uVar4);
  piVar5 = param_1;
  iVar1 = *param_1;
  if ((iVar1 == 0) || (*(float *)(iVar1 + 4) < -100000.0)) {
    local_8 = *(float *)(iVar2 + 0x40) + *(float *)(iVar2 + 0x3c);
  }
  else {
    local_8 = *(float *)(iVar2 + 0x3c) + *(float *)(iVar1 + 4);
  }
  *(undefined1 **)(param_3 + 0x20) = local_30;
  cVar3 = FUN_00234190(*(undefined4 *)(iVar2 + 0x20),iVar2,in_EAX);
  if (cVar3 == '\0') {
    FUN_000ce090(1);
    return (int *)0x0;
  }
  heap_node = (undefined4 *)FUN_002ea01d(8);
  if (heap_node == (undefined4 *)0x0) {
    heap_node = (undefined4 *)0x0;
    FUN_001611d0();
    return piVar5;
  }
  *heap_node = 0;
  heap_node[1] = piVar5;
  FUN_001611d0();
  return piVar5;
}
