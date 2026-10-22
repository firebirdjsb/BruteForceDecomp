/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E675874095506458578893F0DD8B4D3ADF59CA0861843E91A6775F3D9C656EB
 * Entry: 0x00278c60, Ghidra index: 8925, label: FUN_00278c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391e20;
extern uint32_t PTR_LAB_00391e70;
extern uint32_t PTR_LAB_00391f00;
extern uint32_t PTR_LAB_00391f90;
extern uint32_t PTR_LAB_00392020;
extern uint32_t PTR_LAB_00392030;
extern uint32_t PTR_LAB_00392100;
extern uint32_t PTR_LAB_00392150;
extern uint32_t PTR_LAB_00392220;
extern uint32_t PTR_LAB_003922b0;
extern uint32_t PTR_LAB_0039234c;
extern uint32_t PTR_LAB_003923a0;
void FUN_00278c60(void)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int local_4;
  
  piStack_18 = (int *)0xc;
  local_4 = 0;
  piStack_1c = (int *)0x278c72;
  piVar1 = (int *)FUN_002ea01d();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x1c715fea;
    local_4 = -0x1c715fea;
    piStack_18 = &local_4;
    *piVar1 = (int)&PTR_LAB_00392220;
    piStack_1c = (int *)0x278caa;
    FUN_00237ff0();
  }
  piStack_1c = (int *)0x278cb3;
  piStack_18 = piVar1;
  (**(code **)(*piVar1 + 8))();
  piStack_1c = (int *)0xc;
  piStack_20 = (int *)0x278cba;
  piVar1 = (int *)FUN_002ea01d();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x1ef62dc5;
    piStack_1c = (int *)&stack0xfffffff8;
    *piVar1 = (int)&PTR_LAB_00391f90;
    piStack_20 = (int *)0x278cf2;
    FUN_00237ff0();
  }
  piStack_20 = (int *)0x278cfb;
  piStack_1c = piVar1;
  (**(code **)(*piVar1 + 8))();
  piStack_20 = (int *)0xc;
  piStack_24 = (int *)0x278d02;
  piVar1 = (int *)FUN_002ea01d();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piStack_20 = (int *)&stack0xfffffff4;
    piVar1[1] = 1;
    piVar1[2] = 0x8459364;
    *piVar1 = (int)&PTR_LAB_0039234c;
    piStack_24 = (int *)0x278d3a;
    FUN_00237ff0();
  }
  piStack_24 = (int *)0x278d43;
  piStack_20 = piVar1;
  (**(code **)(*piVar1 + 8))();
  piStack_24 = (int *)0xc;
  piStack_28 = (int *)0x278d4a;
  piVar1 = (int *)FUN_002ea01d();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xf5b1349;
    piStack_24 = (int *)&stack0xfffffff0;
    *piVar1 = (int)&PTR_LAB_00392020;
    piStack_28 = (int *)0x278d82;
    FUN_00237ff0();
  }
  piStack_28 = (int *)0x278d8b;
  piStack_24 = piVar1;
  (**(code **)(*piVar1 + 8))();
  piStack_28 = (int *)0xc;
  ppiStack_2c = (int **)0x278d92;
  piVar1 = (int *)FUN_002ea01d();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x9f2a8fb;
    piStack_28 = (int *)&stack0xffffffec;
    *piVar1 = (int)&PTR_LAB_00391f00;
    ppiStack_2c = (int **)0x278dca;
    FUN_00237ff0();
  }
  ppiStack_2c = (int **)0x278dd3;
  piStack_28 = piVar1;
  (**(code **)(*piVar1 + 8))();
  ppiStack_2c = (int **)0xc;
  ppiStack_30 = (int **)0x278dda;
  ppiVar2 = (int **)FUN_002ea01d();
  if (ppiVar2 == (int **)0x0) {
    ppiVar2 = (int **)0x0;
  }
  else {
    ppiVar2[2] = (int *)0x0;
    ppiVar2[1] = (int *)0x1;
    ppiVar2[2] = (int *)0xe3eb9cdd;
    piStack_18 = (int *)0xe3eb9cdd;
    ppiStack_2c = &piStack_18;
    *ppiVar2 = (int *)&PTR_LAB_003922b0;
    ppiStack_30 = (int **)0x278e12;
    FUN_00237ff0();
  }
  ppiStack_30 = (int **)0x278e1b;
  ppiStack_2c = ppiVar2;
  (*(code *)(*ppiVar2)[2])();
  ppiStack_30 = (int **)0xc;
  ppiVar2 = (int **)FUN_002ea01d();
  if (ppiVar2 == (int **)0x0) {
    ppiVar2 = (int **)0x0;
  }
  else {
    ppiVar2[2] = (int *)0x0;
    ppiStack_30 = &piStack_1c;
    ppiVar2[1] = (int *)0x1;
    ppiVar2[2] = (int *)0x8459364;
    *ppiVar2 = (int *)&PTR_LAB_00392030;
    piStack_1c = (int *)0x8459364;
    FUN_00237ff0();
  }
  ppiStack_30 = ppiVar2;
  (*(code *)(*ppiVar2)[2])();
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x5f7670f;
    piStack_20 = (int *)0x5f7670f;
    *piVar1 = (int)&PTR_LAB_00391e20;
    FUN_00237ff0(&piStack_20);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xf68219c;
    piStack_24 = (int *)0xf097de64;
    *piVar1 = (int)&PTR_LAB_00392150;
    FUN_00237ff0(&piStack_24);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xce83bfd;
    piStack_28 = (int *)0xf317c403;
    *piVar1 = (int)&PTR_LAB_003923a0;
    FUN_00237ff0(&piStack_28);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xb213bbb;
    ppiStack_2c = (int **)0xb213bbb;
    *piVar1 = (int)&PTR_LAB_00392100;
    FUN_00237ff0(&ppiStack_2c);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar3 = (int *)FUN_002ea01d(0xc);
  piVar1 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar3[2] = 0;
    piVar3[1] = 1;
    piVar3[2] = -0x13ba917f;
    ppiStack_30 = (int **)0xec456e81;
    *piVar3 = (int)&PTR_LAB_00391e70;
    FUN_00237ff0(&ppiStack_30);
    piVar1 = piVar3;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
