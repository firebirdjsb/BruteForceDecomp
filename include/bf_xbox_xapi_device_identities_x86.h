/* Source-observed Xbox XAPI device-type global identities.
 * 
 * At original XBE callsites 0x001E5340/0x001E77B0 the address of
 * XAPILIB__g_DeviceType_Gamepad is passed to device-query imports.
 * Its layout and Xbox ABI are not proved; incomplete type by design.
 *
 * The draft at 0x0037EF88 walks a pointer-entry table from the address
 * of its Begin global up to the address of its End global. The source's
 * pointer walk is not proven valid ISO C between independent extern
 * objects; original x86 storage adjacency, entry size and layout must
 * be checked before linking or porting. These externs allocate NO data.
 */
#ifndef BF_XBOX_XAPI_DEVICE_IDENTITIES_X86_H
#define BF_XBOX_XAPI_DEVICE_IDENTITIES_X86_H
#include <stdint.h>
typedef struct BF_XAPI_DEVICE_TYPE_LAYOUT_UNVERIFIED BF_XAPI_DEVICE_TYPE_LAYOUT_UNVERIFIED;
extern BF_XAPI_DEVICE_TYPE_LAYOUT_UNVERIFIED XAPILIB__g_DeviceType_Gamepad;
extern uint8_t *XAPILIB__g_DeviceTypeInfoTableBegin;
extern uint8_t *XAPILIB__g_DeviceTypeInfoTableEnd;
#endif
