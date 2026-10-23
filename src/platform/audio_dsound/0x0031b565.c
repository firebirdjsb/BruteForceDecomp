/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DCB0746FFC30104081F53BA68ACC4B242170CA99AAA6EE38B63BA6651204FBD
 * Entry: 0x0031b565, Ghidra index: 12298, label: FUN_0031b565
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff1c;
extern uint32_t DAT_0032ff20;
extern uint32_t DAT_0032ffa8;
extern uint32_t DAT_0032ffac;
extern uint32_t _DAT_fe801148;
extern uint32_t _DAT_fe802044;
extern uint32_t _DAT_fe8020d8;
extern uint32_t _DAT_fe803024;
extern uint32_t _DAT_fe803028;
extern uint32_t _DAT_fe80302c;
extern uint32_t _DAT_fe803034;
extern uint32_t _DAT_fe80303c;
extern uint32_t _DAT_fe803044;
extern uint32_t _DAT_fe80304c;
extern uint32_t _DAT_fe803054;
extern uint32_t _DAT_fe80305c;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe821000;
extern uint32_t _DAT_fe821004;
extern uint32_t _DAT_fe821800;
extern uint32_t _DAT_fe821808;
extern uint32_t _DAT_fe83ff00;
extern uint32_t _DAT_fe83ff04;
extern uint32_t _DAT_fe83ff10;
extern uint32_t _DAT_fe83ff14;
extern uint32_t _DAT_fe83fffc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b565(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_ECX;
  uint uVar4;
  int local_8;
  
  _DAT_fe802044 = DAT_0032ffac;
  _DAT_fe83ff00 = 0;
  _DAT_fe83ff04 = 0;
  _DAT_fe801148 = (DAT_0032ff20 >> 0xc) - 1;
  _DAT_fe803024 = 0;
  _DAT_fe803028 = 0x2000;
  uVar4 = 0;
  local_8 = 0;
  piVar1 = DAT_0032ffa8;
  _DAT_fe8020d8 = _DAT_fe801148;
  do {
    _DAT_fe821808 = DAT_0032ff1c + local_8;
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 8);
    local_8 = local_8 + 0x1000;
    _DAT_fe821800 = uVar4;
    *piVar1 = _DAT_fe821808;
    piVar1[1] = 0;
    uVar4 = uVar4 + 1;
    piVar1 = piVar1 + 2;
  } while (uVar4 < 2);
  do {
  } while ((_DAT_fe820010 & 0xfffffffc) < 8);
  _DAT_fe821000 = 0;
  _DAT_fe821004 = 0x2000;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = FUN_003148cf(0x626f5344,0x3c,1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0031562f();
    }
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    FUN_0031564e();
  }
  _DAT_fe83ff10 = in_ECX & 0xfffffff7 | 1;
  _DAT_fe83ff14 = 0xff;
  _DAT_fe80302c = _DAT_fe803024;
  _DAT_fe80303c = _DAT_fe803034;
  _DAT_fe80304c = _DAT_fe803044;
  _DAT_fe80305c = _DAT_fe803054;
  _DAT_fe83fffc = 3;
  return;
}
