/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F69772B2BDDEF2C00D2E5EA9F4105F162791975405E02C92E352DB96EFAA693
 * Entry: 0x000481c0, Ghidra index: 573, label: FUN_000481c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000388b0(int param_1);
extern uint32_t FUN_000120f0(int32_t in_EAX);

float10 FUN_000481c0(float *param_1)

{
  bool bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  
  bVar1 = false;
  if (in_ECX != 0) {
    if ((*(int *)(in_EAX + 0x770) == 0) && (*param_1 <= 1.01)) {
      iVar3 = FUN_000388b0(*(undefined4 *)(in_EAX + 0x358));
      if (iVar3 == 0) goto LAB_000481fb;
    }
    bVar1 = true;
  }
LAB_000481fb: ;
  /* Original stores exact IEEE-754 float bit patterns, not pointers. */
  uint32_t scale_bits = bVar1 ? UINT32_C(0x3f933333) : UINT32_C(0x3f800000);
  float scale_value;
  memcpy(&scale_value, &scale_bits, sizeof scale_value);
  iVar3 = FUN_000120f0();
  iVar3 = *(int *)(iVar3 + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
  if ((((cVar2 != '\0') && (iVar3 = *(int *)(iVar3 + 0x164), iVar3 != 0)) &&
      (*(int *)(*(int *)(iVar3 + 0xc) + 4) == 0x14)) &&
     ((iVar3 != 0 && (*(int *)(*(int *)(iVar3 + 0x228) + 0x16c) != 0)))) {
    return (float10)scale_value * (float10)3.0;
  }
  return (float10)scale_value;
}
