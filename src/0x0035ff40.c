/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBA29D5FBCBE2B0F355E769596EC0C4C6B1EDFFBF9E93C0D72EA6E95BDBCF63B
 * Entry: 0x0035ff40, Ghidra index: 13224, label: FUN_0035ff40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412b08;
extern uint32_t DAT_00412b10;
extern uint32_t DAT_00412f10;
extern uint32_t DAT_00413310;
extern uint32_t DAT_00413710;
extern uint32_t DAT_00413b10;
extern uint32_t DAT_00413f10;
extern uint32_t DAT_00414310;
extern uint32_t DAT_00414710;
extern uint32_t DAT_00414b10;
extern uint32_t DAT_00414b14;
extern uint32_t DAT_00414b20;
extern uint32_t DAT_00414b24;
extern uint32_t DAT_00414b30;
extern uint32_t DAT_00414b34;
extern uint32_t DAT_00414b38;
extern uint32_t DAT_00414b3c;
extern uint32_t DAT_00414b40;
extern uint32_t DAT_004a90e4;
extern uint32_t DAT_004be7a4;
extern uint32_t DAT_004be7b0;
extern uint32_t DAT_004bebb0;
extern uint32_t DAT_004befb0;
extern uint32_t DAT_004bf3b0;
extern uint32_t DAT_004bf7b0;
extern uint32_t DAT_004bfbb0;
extern uint32_t DAT_004bffb0;
extern uint32_t DAT_004c03b0;
extern uint32_t DAT_004c07e4;
extern uint32_t _DAT_00414b18;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035ff40(uint param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_004be7a4 = *param_2;
  DAT_00414b30 = 0;
  if ((param_1 & 0x10000) == 0) {
    if (DAT_004c07e4 != 0) {
      DAT_004c07e4 = 0;
      iVar2 = 0x800;
      puVar3 = &DAT_00412b10;
      puVar4 = &DAT_004be7b0;
      goto LAB_00360023;
    }
  }
  else if (DAT_004c07e4 != 1) {
    DAT_004c07e4 = 1;
    puVar3 = &DAT_00412b10;
    puVar4 = &DAT_004bf3b0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00413310;
    puVar4 = &DAT_004bebb0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00412f10;
    puVar4 = &DAT_004befb0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00413710;
    puVar4 = &DAT_004be7b0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00413b10;
    puVar4 = &DAT_004c03b0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00414310;
    puVar4 = &DAT_004bfbb0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_00413f10;
    puVar4 = &DAT_004bffb0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 0x100;
    puVar3 = &DAT_00414710;
    puVar4 = &DAT_004bf7b0;
LAB_00360023:
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_002fe150(param_1);
  if (DAT_004a90e4 == 0) goto LAB_0036030a;
  uVar1 = param_1 & 0x70000000;
  if (uVar1 == 0x10000000) {
    FUN_0035f990();
    iVar2 = *param_2;
    *param_2 = iVar2 * 2;
    *param_5 = iVar2 * 2 - *in_EAX * param_3;
    if ((param_1 & 0x20000) != 0) {
      DAT_00414b34 = in_EAX + 0x18;
      FUN_0035feb0(param_4);
      DAT_00414b20 = in_EAX[0x28];
      DAT_00414b40 = in_EAX[0x27];
      DAT_00414b14 = in_EAX[6];
      DAT_00412b08 = in_EAX[5];
      DAT_00414b24 = DAT_00414b14;
      goto LAB_0036030a;
    }
    DAT_00414b34 = in_EAX + 0x16;
    FUN_0035feb0(param_4);
    DAT_00414b40 = in_EAX[0x25];
    DAT_00414b24 = in_EAX[2];
    DAT_00414b20 = in_EAX[0x26];
    DAT_00414b14 = in_EAX[4];
    DAT_00412b08 = in_EAX[1];
    uVar1 = in_EAX[3];
  }
  else {
    if ((uVar1 == 0x30000000) || (uVar1 == 0x50000000)) {
      *param_5 = *param_2 + *in_EAX * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_00414b20 = in_EAX[0x24];
        DAT_00414b40 = in_EAX[0x23];
        DAT_00414b34 = in_EAX + 0x1c;
        DAT_00412b08 = in_EAX[0xb];
        DAT_00414b10 = in_EAX[0xc];
        DAT_00414b38 = DAT_00414b10;
        goto LAB_0036030a;
      }
      DAT_00414b40 = in_EAX[0x21];
      DAT_00414b20 = in_EAX[0x22];
      DAT_00414b34 = in_EAX + 0x1a;
      DAT_00414b38 = in_EAX[8];
      DAT_00414b10 = in_EAX[10];
    }
    else {
      if (uVar1 != 0x40000000) {
        *param_5 = *param_2 - *in_EAX * param_3;
        if ((param_1 & 0x20000) != 0) {
          DAT_00414b20 = in_EAX[0x20];
          DAT_00414b40 = in_EAX[0x1f];
          DAT_00414b34 = in_EAX + 0x18;
          DAT_00412b08 = in_EAX[5];
          DAT_00414b10 = in_EAX[6];
          DAT_00414b38 = DAT_00414b10;
          goto LAB_0036030a;
        }
        DAT_00414b40 = in_EAX[0x1d];
        DAT_00414b20 = in_EAX[0x1e];
        DAT_00414b34 = in_EAX + 0x16;
        DAT_00414b10 = in_EAX[4];
        DAT_00414b38 = in_EAX[2];
        DAT_00412b08 = in_EAX[1];
        uVar1 = in_EAX[3];
        goto LAB_003602fb;
      }
      FUN_0035f990();
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_5 = iVar2 * 2 + *in_EAX * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_00414b34 = in_EAX + 0x1c;
        FUN_0035feb0(param_4);
        DAT_00414b14 = in_EAX[0xc];
        DAT_00414b40 = in_EAX[0x2b];
        DAT_00414b20 = in_EAX[0x2c];
        DAT_00412b08 = in_EAX[0xb];
        DAT_00414b24 = DAT_00414b14;
        goto LAB_0036030a;
      }
      DAT_00414b34 = in_EAX + 0x1a;
      FUN_0035feb0(param_4);
      DAT_00414b40 = in_EAX[0x29];
      DAT_00414b24 = in_EAX[8];
      DAT_00414b20 = in_EAX[0x2a];
      DAT_00414b14 = in_EAX[10];
    }
    DAT_00412b08 = in_EAX[7];
    uVar1 = in_EAX[9];
  }
LAB_003602fb:
  if (DAT_00412b08 <= uVar1) {
    DAT_00412b08 = uVar1;
  }
LAB_0036030a:
  _DAT_00414b18 = 1 << ((byte)DAT_00412b08 & 0x1f);
  DAT_00414b3c = _DAT_00414b18 + -1;
  return;
}
