/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A08227013EE4D66230C3265C2243F909B93CC285F9EA8216FFDE459EC639F2A
 * Entry: 0x00200080, Ghidra index: 7249, label: FUN_00200080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00200080(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int in_ECX;
  
  puVar3 = param_3;
  piVar2 = param_2;
  cVar4 = FUN_001fedb0(param_1,param_2,param_3);
  param_3._0_1_ = cVar4;
  if (cVar4 == '\0') {
    uVar5 = *(undefined1 *)(in_ECX + 0x48);
    cVar4 = (char)param_1;
    param_3._0_1_ = '\0';
    bVar1 = false;
    if (*piVar2 == 0x15468095) {
      if (cVar4 == '\0') {
        uVar5 = *(undefined1 *)puVar3;
      }
      else {
        *(undefined1 *)puVar3 = uVar5;
      }
      bVar1 = true;
      param_3._0_1_ = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x48) = uVar5;
    uVar5 = *(undefined1 *)(in_ECX + 0x49);
    if ((!bVar1) && (*piVar2 == -0xd45419c)) {
      if (cVar4 == '\0') {
        uVar5 = *(undefined1 *)puVar3;
      }
      else {
        *(undefined1 *)puVar3 = uVar5;
      }
      bVar1 = true;
      param_3._0_1_ = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x49) = uVar5;
    uVar5 = *(undefined1 *)(in_ECX + 0x4a);
    if ((!bVar1) && (*piVar2 == -0x6d4f4eb)) {
      if (cVar4 == '\0') {
        uVar5 = *(undefined1 *)puVar3;
      }
      else {
        *(undefined1 *)puVar3 = uVar5;
      }
      bVar1 = true;
      param_3._0_1_ = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x4a) = uVar5;
    if (!bVar1) {
      bVar1 = false;
      if (*piVar2 == 0x217f576) {
        if (cVar4 == '\0') {
          *(undefined4 *)(in_ECX + 0x40) = *puVar3;
        }
        else {
          *puVar3 = *(undefined4 *)(in_ECX + 0x40);
        }
        bVar1 = true;
        param_3._0_1_ = '\x01';
      }
      if ((!bVar1) && (*piVar2 == -0x1a7406a)) {
        if (cVar4 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *puVar3;
        }
        else {
          *puVar3 = *(undefined4 *)(in_ECX + 0x44);
        }
        param_3._0_1_ = '\x01';
      }
    }
    param_2 = (int *)0xe722c1e5;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,piVar2,0);
  }
  return (char)param_3;
}
