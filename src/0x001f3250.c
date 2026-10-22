/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 240A98E4822F976CB0B1D51456AE3233DDBDB96EC76F78ED3513DB7991001C7C
 * Entry: 0x001f3250, Ghidra index: 7017, label: FUN_001f3250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004071b8;
undefined4 FUN_001f3250(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int unaff_EDI;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  if (*(int *)(unaff_EDI + 0xc0) != 0) {
    iVar1 = XAPILIB__XInputGetState(*(int *)(unaff_EDI + 0xc0),local_18);
    if (iVar1 == 0) {
      *in_EAX = local_14;
      in_EAX[1] = local_10;
      in_EAX[2] = local_c;
      in_EAX[3] = local_8;
      *(undefined2 *)(in_EAX + 4) = local_4;
      local_28 = DAT_004071b8;
      local_20 = ((float)(int)*(short *)((int)in_EAX + 10) + 0.5) * 3.0518044e-05;
      in_EAX[5] = local_20;
      local_24 = -(((float)(int)*(short *)(in_EAX + 3) + 0.5) * 3.0518044e-05);
      in_EAX[6] = local_24;
      FUN_001f29c0(unaff_EDI + 0xc4,&local_28,local_20,local_24);
      FUN_001f3400(unaff_EDI,in_EAX + 5,in_EAX + 6,local_28,0x3dcccccd);
      local_24 = DAT_004071b8;
      local_1c = ((float)(int)*(short *)((int)in_EAX + 0xe) + 0.5) * 3.0518044e-05;
      in_EAX[7] = local_1c;
      local_20 = -(((float)(int)*(short *)(in_EAX + 4) + 0.5) * 3.0518044e-05);
      in_EAX[8] = local_20;
      FUN_001f29c0(unaff_EDI + 0xd4,&local_24,local_1c,local_20);
      FUN_001f3400(unaff_EDI,in_EAX + 7,in_EAX + 8,local_24,0x3dcccccd);
      return 1;
    }
  }
  return 0;
}
