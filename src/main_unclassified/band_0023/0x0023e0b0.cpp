/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1E21D87236001B13FB9D57FFADA3D0912642947943E543FB184B67471E0682B
 * Entry: 0x0023e0b0, Ghidra index: 7973, label: FUN_0023e0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023e0b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *in_EAX;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  if (param_1 != param_2) {
    puVar17 = param_1 + 10;
    puVar16 = in_EAX + 10;
    do {
      *in_EAX = *param_1;
      puVar16[-9] = puVar17[-9];
      uVar1 = puVar17[-4];
      uVar2 = puVar17[-3];
      uVar3 = puVar17[-2];
      uVar4 = puVar17[-1];
      uVar5 = puVar17[4];
      uVar6 = puVar17[5];
      uVar7 = puVar17[6];
      uVar8 = puVar17[7];
      uVar9 = puVar17[-7];
      uVar10 = puVar17[-6];
      uVar11 = puVar17[-5];
      uVar12 = *puVar17;
      uVar13 = puVar17[1];
      uVar14 = puVar17[2];
      uVar15 = puVar17[3];
      puVar16[-8] = puVar17[-8];
      puVar16[-7] = uVar9;
      puVar16[-6] = uVar10;
      puVar16[-5] = uVar11;
      puVar16[-4] = uVar1;
      puVar16[-3] = uVar2;
      puVar16[-2] = uVar3;
      puVar16[-1] = uVar4;
      *puVar16 = uVar12;
      puVar16[1] = uVar13;
      puVar16[2] = uVar14;
      puVar16[3] = uVar15;
      param_1 = param_1 + 0x12;
      in_EAX = in_EAX + 0x12;
      puVar17 = puVar17 + 0x12;
      puVar16[4] = uVar5;
      puVar16[5] = uVar6;
      puVar16[6] = uVar7;
      puVar16[7] = uVar8;
      puVar16 = puVar16 + 0x12;
    } while (param_1 != param_2);
  }
  return;
}
