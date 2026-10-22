/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33EA43CFB55E6B27A7F6547BA62DA83631CB78B6536986E36F4859ABA441B52D
 * Entry: 0x00167610, Ghidra index: 4727, label: FUN_00167610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f4fc;
extern uint32_t DAT_0041f500;
extern uint32_t DAT_0041f504;
extern uint32_t DAT_0041f508;
extern uint32_t DAT_0041f50c;
extern uint32_t DAT_0046d254;
extern uint32_t DAT_0046d258;
extern uint32_t DAT_0046d25c;
extern uint32_t _DAT_0046d260;
extern uint32_t _DAT_0046d264;
extern uint32_t _DAT_0046d268;
extern uint32_t _DAT_0046d26c;
extern uint32_t _DAT_0046d270;
extern uint32_t _DAT_0046d274;
extern uint32_t _DAT_0046d278;
extern uint32_t _DAT_0046d27c;
extern uint32_t _DAT_0046d280;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00167610(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *in_ECX;
  
  uVar4 = DAT_0041f4fc;
  fVar1 = 0.0;
  iVar5 = -1;
  uVar3 = DAT_0041f4fc & 1;
  *in_ECX = 0.0;
  in_ECX[1] = 0.0;
  in_ECX[2] = 0.0;
  if (uVar3 != 0) {
    iVar5 = 0;
    fVar1 = *(float *)(&DAT_0041f500 + uVar4 * 0x10);
    *in_ECX = DAT_0046d254 * fVar1;
    in_ECX[1] = DAT_0046d258 * fVar1;
    in_ECX[2] = DAT_0046d25c * fVar1;
  }
  if ((uVar4 & 2) != 0) {
    iVar5 = iVar5 + 1;
    fVar2 = *(float *)(&DAT_0041f504 + uVar4 * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_ECX = _DAT_0046d260 * fVar2 + *in_ECX;
    in_ECX[1] = _DAT_0046d264 * fVar2 + in_ECX[1];
    in_ECX[2] = _DAT_0046d268 * fVar2 + in_ECX[2];
  }
  if ((uVar4 & 4) != 0) {
    iVar5 = iVar5 + 1;
    fVar2 = *(float *)(&DAT_0041f508 + uVar4 * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_ECX = _DAT_0046d26c * fVar2 + *in_ECX;
    in_ECX[1] = _DAT_0046d270 * fVar2 + in_ECX[1];
    in_ECX[2] = _DAT_0046d274 * fVar2 + in_ECX[2];
  }
  if ((uVar4 & 8) != 0) {
    iVar5 = iVar5 + 1;
    fVar2 = *(float *)(&DAT_0041f50c + uVar4 * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_ECX = _DAT_0046d278 * fVar2 + *in_ECX;
    in_ECX[1] = _DAT_0046d27c * fVar2 + in_ECX[1];
    in_ECX[2] = _DAT_0046d280 * fVar2 + in_ECX[2];
  }
  fVar1 = 1.0 / fVar1;
  *in_ECX = fVar1 * *in_ECX;
  in_ECX[1] = fVar1 * in_ECX[1];
  in_ECX[2] = fVar1 * in_ECX[2];
  if (iVar5 == -1) {
    iVar5 = 4;
  }
  return iVar5;
}
