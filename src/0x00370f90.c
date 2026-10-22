/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 516F088EACF03AF31504C2265CAB1FACB0AF841A6932139E4ED54D0D3D98E858
 * Entry: 0x00370f90, Ghidra index: 13376, label: FUN_00370f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080394;
extern uint32_t DAT_00100a20;
extern uint32_t DAT_0037dfd4;
undefined4 * FUN_00370f90(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_EAX;
  int unaff_ESI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(*(int *)(unaff_ESI + 0x37c) + 4) & 0x12) == 0) {
    fVar2 = (float)*(int *)(unaff_ESI + 0xa90);
    if (*(int *)(unaff_ESI + 0xa90) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = fVar2 * *(float *)(unaff_ESI + 0x518) + *(float *)(unaff_ESI + 0xaa8);
    fVar3 = (float)*(int *)(unaff_ESI + 0xa94);
    if (*(int *)(unaff_ESI + 0xa94) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = fVar3 * *(float *)(unaff_ESI + 0x51c) + *(float *)(unaff_ESI + 0xaac);
    if (((char)((uint)*(undefined4 *)(unaff_ESI + 8) >> 8) < '\0') &&
       (D3D8__D3DRS_MultiSampleAntiAlias != 0)) {
      fVar2 = fVar2 - 0.5;
      fVar3 = fVar3 - 0.5;
    }
    *in_EAX = &DAT_00100a20;
    in_EAX[1] = fVar2;
    in_EAX[3] = 0;
    in_EAX[4] = 0;
    in_EAX[2] = fVar3;
    if ((*(byte *)(unaff_ESI + 0x17b8) & 1) == 0) {
      if (DAT_0037dfd4 == 2) {
        *(undefined4 *)(unaff_ESI + 0x17ac) = *(undefined4 *)(unaff_ESI + 0x50c);
        *(float *)(unaff_ESI + 0x17a8) =
             *(float *)(unaff_ESI + 0x508) * *(float *)(unaff_ESI + 0x500) *
             *(float *)(unaff_ESI + 0x50c);
      }
      else {
        *(float *)(unaff_ESI + 0x17a8) =
             *(float *)(unaff_ESI + 0xaa0) * *(float *)(unaff_ESI + 0x50c);
        *(float *)(unaff_ESI + 0x17ac) =
             *(float *)(unaff_ESI + 0xaa4) * *(float *)(unaff_ESI + 0x50c);
      }
    }
    uVar1 = *(undefined4 *)(unaff_ESI + 0x17ac);
    in_EAX[6] = *(undefined4 *)(unaff_ESI + 0x17a8);
    in_EAX[5] = &DAT_00080394;
    in_EAX[7] = uVar1;
    return in_EAX + 8;
  }
  D3D8LTCG__D3DDevice_GetViewportOffsetAndScale_0();
  if ((*(uint *)(unaff_ESI + 8) & 0x200) == 0) {
    in_EAX[1] = local_20;
    in_EAX[2] = local_1c;
    in_EAX[3] = local_18;
    in_EAX[4] = local_14;
    *in_EAX = &DAT_00100a20;
    in_EAX[6] = local_10;
    in_EAX[5] = &LAB_00100af0;
    in_EAX[7] = local_c;
    in_EAX[8] = local_8;
    in_EAX[9] = local_4;
    in_EAX = in_EAX + 10;
  }
  if ((*(byte *)(unaff_ESI + 0x17b8) & 2) == 0) {
    if (DAT_0037dfd4 == 2) {
      *(undefined4 *)(unaff_ESI + 0x17b4) = *(undefined4 *)(unaff_ESI + 0x50c);
      *(float *)(unaff_ESI + 0x17b0) =
           *(float *)(unaff_ESI + 0x508) * *(float *)(unaff_ESI + 0x500) *
           *(float *)(unaff_ESI + 0x50c);
      uVar1 = *(undefined4 *)(unaff_ESI + 0x17b4);
      in_EAX[1] = *(undefined4 *)(unaff_ESI + 0x17b0);
      *in_EAX = &DAT_00080394;
      in_EAX[2] = uVar1;
      return in_EAX + 3;
    }
    *(undefined4 *)(unaff_ESI + 0x17b0) = 0;
    *(undefined4 *)(unaff_ESI + 0x17b4) = *(undefined4 *)(unaff_ESI + 0x50c);
  }
  uVar1 = *(undefined4 *)(unaff_ESI + 0x17b4);
  in_EAX[1] = *(undefined4 *)(unaff_ESI + 0x17b0);
  *in_EAX = &DAT_00080394;
  in_EAX[2] = uVar1;
  return in_EAX + 3;
}
