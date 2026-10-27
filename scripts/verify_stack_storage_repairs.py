#!/usr/bin/env python3
"""Pin observed stack storage; no complete C ABI or behavior claim."""
import argparse
import hashlib
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

# Entry, byte count or ordered (relative offset, size) spans, exact body SHA-256.
BODIES = (
    (0x002D44F0, 500, "e14462dca6da6e06808a74ad2289fa584f59e15985da4063d8d595434347e9b9"),
    (0x002BA260, 190, "60e1f14faaecc9a839cd75d7a3dde838d215cb519421893b5bd09d15ad00316e"),
    (0x001F45A0, 407, "c7a59c855728a403e7180e1d4276043560d74c00dd219ec9cc19991f11ef19f8"),
    (0x0010A420, 470, "2700ffb7f14ba3a8679314853598d8d1e97028f9fed986e8906decd6484448a8"),
    (0x000EF3A0, 109, "393662cca64b43f9b962a545a7513befb1a2713923a998ba185c07a3dcd96578"),
    (0x000DC510, 803, "7016e00c4e198173d11c4c91b58efa1753b0e24a56226f189240abf1f8d7c087"),
    (0x000DC140, ((0, 361), (368, 600)), "d05c90251ee01e8e1137c2502132deb3f57847bc2f49b1760ee99fe490113e85"),
    (0x0009E9C0, 131, "f42cce2d01444d7f2f84fa12e4c349438b319dbf1b126132c138cdae8c40271e"),
    (0x0037F621, 163, "4fa3c5b8948efa4e67d27ab6e456445a6e64d5e42336a388cbe72bcd2f4fdcf1"),
    (0x00379139, 636, "64d90201b8e3d27d1edf89bc2c84ccdd1e40d88a3a5c9d52b9eb1ba40083fcf2"),
    (0x0036FF70, 513, "0b5aaf10156272d654e04dd5e33dbba318e63b76a5e991eb0b7919f3b9957225"),
    (0x0035FEB0, 141, "fe3b9a017f31847f12ed380aa857d366575b43eb83ddf2b52f72ab200f7a94c6"),
    (0x0035F8D0, 184, "f4b210f82bd2701874c5d47f1f3a5b1de8184ee7a90ee36bd4895d81c9f7f8da"),
    (0x0034D726, 1136, "069af2dcf7328e19d49ecbcb28f9b8180b38888976ea4553d6ec2cd0dcf91d50"),
    (0x0034CCA3, 409, "1e4a411dd2e51a52dc1bd547d48aa112974bfbba8f51ce0a360eadec7fd220f3"),
    (0x00342A84, 1389, "cdd5d9daa4285f5112a0dd90785e2f4c098efae1deea94d039773e29027f1644"),
    (0x003310CC, 335, "20622f01948f791a79fb5150355dbf13d06f14a7f9e059194627c50e18032f31"),
    (0x00316530, 294, "9b8679937d2c83d86ad28de0a291c328c47dfa31e96ff0739b5cfbdb7939cdaa"),
    (0x0034F2B2, 448, "a812d0c32c08f75aeccc753222fd29367ff086a92bd6c4b231e4ca2e0267c87a"),
    (0x0031C7CC, 223, "6bb9e15b51ce3422a3b71d07fedc8af6a4858886a5e1da46050adf9f157245ac"),
    (0x003451B7, 518, "43384cda3ac53586b4d07a826470e46340b17f9eaa9e63e4627bc2c4cc10eb07"),
    (0x00338406, 255, "19fa00c8727ff84dee4d8369b3f57919a559ef7db0e0ebd5c135c8fb3c992997"),
    (0x001E48E0, 386, "8866befbcd5d7ee5c9642b87d1105cd829f3530b3ac7f3db41bca78028975d1f"),
    (0x000A42D0, 709, "49c324674e97b193cf2b87defab44da0e520aabd71b91824735aeb2a120f2c42"),
    (0x002C2530, ((0, 138), (144, 87)), "768031773dc47284a6eb2afd03a23e9c6dd05455e305c06fb7d633d05f890a8c"),
    (0x002CD2B0, 520, "c028d0c3efa30ca8c2f104ddd2bcdf9a132c1e73bb429530ef96a4334198421f"),
    (0x002EBEA0, 65, "b77ad187f6f3db2a5ae4f8e214b023d7c62ce25a38ce769a993d2a8c81643760"),
    (0x0033F31D, 37, "a2ac32d1c4ddc6433dec56a64106d101dc9ddeddf9073db75f3afcb26b9840f2"),
    (0x0033FA33, 65, "8b93eb1016a0f75c9584316977df8a5594f70a23854b51278d4f941549b7f803"),
    (0x0033FA74, 378, "1887d95a6576f22a26249023be961860e83b5ce9a7f63577488431d44a2caae2"),
    (0x00344AF4, 314, "aafe8cfacc22e9111794b1d365e0c821608666637b11745b8bd112184eda0844"),
    (0x002A6450, 194, "cd856200d4e1aa40079bbc85e2437c0d6e532b57c1a9e0e8977a987c61a2542e"),
    (0x003764C0, 2383, "95b71225750e8e250472f2424f057fb5b8cab48179975a9aa75e0d1e4d900220"),
    (0x00219110, 463, "14eac87692ce198065b6786a8e1429a62c344bd13e2bf08d6dabaab6386b51c5"),
    (0x0036F320, 285, "3dea9d09e0d916691968326915db6b88cebcef02762c8a5e83fff20e54999b8d"),
    (0x00370910, 62, "8ffafb7699c7bdf1ddc150c5e769846889dcaa2baf94931caeb974ecdcece02f"),
    (0x002344B0, 190, "32635e240c5eaeb5d5aff606d36dec6aca5fa86c03fd7f565eb67975a1006cf3"),
    (0x00291060, 297, "c79ebe3c1270f0ee163096f56b5e2862416864c2f7ea963bc70400411d66c983"),
    (0x002B5590, 48, "58030298ad41699924a77ef8db850f7708d045f819c893ec22c0f34d69321f26"),
    (0x002BCCD0, 89, "211508feab89884209359813718b19524492c85895e32d26bf326a9a65a1735c"),
    (0x002C4520, 270, "d26b2a0f796594557adc8fa929391a64a1b039114be12978e9a94c791a1f57f0"),
    (0x003760F0, 245, "dbad93505ee4f3cb9bdff75e9eecf959bef26f00881cfb9e9e934f7af2a9bb4f"),
    (0x0036F1F0, 291, "8acf6be3408e1e7603d680aa4ffd5a929ac5234cb2772f9e628d38439a49b74c"),
    (0x00379A01, 2527, "d0725f94d600582ce3e217a9bad7419baed4b33db5d7549ad5b711c27db655d4"),
    (0x002B4780, ((0, 1994), (2000, 190), (2218, 25)), "920c8454e85c99488f83fcdaf8f0ec28ed3b242eec2a136ac707d3fcc9fdb0c8"),
    (0x002D9E70, ((0, 141), (144, 163)), "5ec0ae0658bbf8315e5b890eceeff15cf2a07218f4e17f5833373bf986cc1843"),
    # Unchanged helpers inspected for descriptor inputs and pointed storage.
    (0x002D9DD0, 150, "77d2e216d07b0af17c7badee9d6e3e323eefcdfe9137e3ee553d5d8c8ba64567"),
    (0x002D9D10, 92, "69f156421d70bfbae4adc61fef865ade143d3bf92dfe817aa05565d22b134e70"),
    (0x000F44C0, 468, "b40f7f881edd4e333dcc1b105b34fc41e3e14cb6912336094df824b8a7e434a2"),
    (0x002BC340, 388, "012f233c2fa3b1dcc3861e14f13df3cda3736233864cc96875434745f00b5eb5"),
    (0x002B3B70, 78, "70e2692eca58c0dfa6db049f902f5d4216c95668ecfb8311bc52ed20762179ef"),
    (0x002B3BC0, 157, "63cd7387932596d1b79f3439501ecf224698bef8edd9b3f311cf92dfb8c26515"),
    (0x002B65A0, 145, "56854f87af82b0b8e08a44e207a2e58f986f8aabf682b977260b6de0efe031b4"),
    (0x00157260, ((0, 282), (288, 582)), "80c2a63d64fad4c47f5885c9845da25bf670bc67d50c0ff06af6c64bf4ebb4e7"),
    (0x003526E9, 1853, "f36960686064abaf3099a385af93bb14e788f25bc4d11431294d6d6827071614"),
    (0x00125AD0, ((0, 542), (553, 580)), "2c79f5187a5a3f6b3acebadc6f6c3738b63845d6cc749a9683ee8f565d09b9b4"),
    (0x00315465, 356, "a56cc1dfeaea537dbc01851bc5886a022055c951bb8d33abb40ad3308083831b"),
    (0x00232BE0, 349, "104cde5ad565a5444dd515a4744d7bd78ce63290caed96243dfc37262547c65c"),
    (0x0023D240, 348, "0b216bc764b023224b4a87f6970b2c48788e24296fba1899a0e990a7e7a6d1a9"),
    (0x00224320, 490, "f8076a986c0939e3ffbc01c803cd5c1733ecf4885551129450163a7d8f1ba426"),
    (0x00354FF6, 930, "31ec306f27706c405db259a41caecd4741a111a766267b17fb2215aa7d6b7302"),
    (0x002DD4A0, 422, "9e521e65d821ebcf8c49579823463b0bbd0c11590ba977c8179d99266cbaf8e8"),
    (0x001FEDB0, 514, "a6bda7fedeb2e8341086f009e700b8e78e8809c5decde54662d1634cce27d541"),
    (0x002BB980, 622, "8cb376c292fa8f6967bae34aee2046268e94d533917193e144975fcd03387261"),
    (0x0033E13A, 473, "3ead9b1ea3ad925b15e8e133cf594f57f6d8b4a840dd9979a5b1d92058e8aed1"),
    (0x0034BD47, 472, "fba8da494e65b869d42f6bb90d71d1bffa3330d9f6068ed85e2029896e957d73"),
    (0x001F3FB0, ((0,369),(620,12)), "7fb32f534c6943500c9d55895945af2c3567f55d8fef5bf3a6a72a8493cbbec5"),
    (0x00209F40, 327, "616c03bf83a483520a4a94ec3b1c13136f06d3fd3aebd46bdafd0d2d879f5d06"),
    (0x002710E0, ((0,205),(208,168)), "b91d8c20f819f97d67056cabe45481d26d2982218d0deb1f2f3ace30f3aeb897"),
    (0x00200080, 257, "9a08227013ee4d66230c3265c2243f909b93cc285f9ea8216ffde459ec639f2a"),
    (0x00201E80, 298, "f99a52250cec93ec0721dacda5e652c5b8c472880e389f5918bace01c7213abd"),
    (0x00208A70, 305, "a49d505e5385826be2d57bc06859d9fb01c3f0a14c367cfa9440d22528725647"),
    (0x00223F00, 195, "b7823c192ac1f8078af10d9e878d195db38d9ed02a1d9c78cc17cfe3114ceda0"),
    (0x002B6100, ((0,106),(112,208)), "87e2effb6df1992c6d974f857d6c231010e5d8e40026e0cd3e11f32b516627f6"),
    (0x002B6240, 252, "39f0c92758428773ffff08c68cc155970ca8835341130b20756393ed56f1ace7"),
    (0x0012BAF0, 363, "a158ab8baeae0c76832bf083f550b79e29ff902e9429fbd043c32df2b54afbad"),
    (0x00233B10, 128, "4911f4e987f45df85a910e477357c52f90778b138eed1ec08b40ab9d5839c479"),
    (0x0010A2E0, 307, "b6f4946cc952ff7d69f9260284540300fbe9d6efedeb5a029ae1fb3713b56d38"),
    (0x0010ABB0, 309, "925fdd7fee9c95b51ec089f9a29af2b31131827d67a72e3113d90df7119ba10a"),
    (0x001F8C90, 280, "af6d003d928de65fde56b9138c3a5cde5961eaa0a9f29eaf6a6ffa227c0c67a8"),
    (0x00202F40, 285, "320cb01d45ae02fdbf082d43fa39528fc938d04d609b4d392d64629472dba284"),
    (0x000D1BF0, 197, "76d6709edeef5e252b16402d65a17aaa098e6cee1114537f12ad1d087e919c12"),
    (0x00232F20, 247, "c117ee3c01269202e8055f3d45ffe64bdbfdd4f18c087df727dacc8a2f4eb5f3"),
    (0x00233290, 276, "51de2978460dd0eeeafec427b85e551ada075137dbca706b5d4d32d84f101bb6"),
    (0x002BA7F0, 173, "4d2862b65cb1228814f8196eb5c6fc91cc7e079b0fe45ec7272d5269368eb972"),
    (0x002CDCB0, 190, "68716ae5d7fbad548e962ad224159a916537d7438301229d54137f5a5b96c875"),
    (0x00210BF0, 95, "f00525729d4a2a45eadad7a918b42a19075f6af0b645dff633c75aa77b27d853"),
    (0x002D34C0, 159, "6e5d6a30084232261e1bdfd24d27010d4decf7b60f7e3b5e36d5e7d1374ce2fd"),
    (0x002BA160, 248, "3f0e95b193dd627d119e63e5587739cd4702c3625c2e8a97e9a70b112b0cc220"),
    (0x000EDF70, 163, "0b830a44d5a18b20117b40b72f3e68476fab00ed834cc2a45c059d8fcbe2a321"),
    (0x00141630, 131, "e4eab6557c599efcd081a27ea7c39f05d404297dca1e2a6824c7d94bd7f66cb7"),
    (0x001B1810, 122, "ce32ba1039c9aa0f3cde0c123114b2a49c4d9e409cba37fab5d9429aa82ee92d"),
    (0x00200400, 126, "9cb54fb5a6e0186fa1590917ff23225a016dcfde79e4ae2d3b55a46ff8456520"),
    (0x00202AF0, 162, "efab2fac68a640c0e5d90e582f630ae7c7457da5858c226e33d4c9d2466d4aa5"),
    (0x0034D40C, 169, "d060a408242fec4d254dfc2efdb3a38fb903d3a1c053640b2bbe58dacaccd529"),
    (0x003518D4, 1169, "2d04eef67634b63204dafa78df34dd2bd3df86f3443892548236b119e8e7feec"),
    (0x000330B0, 528, "fea2683e6e913fb8e089ea0726c6b535c6cadb4d33c395c4bac409293eafcba7"),
    (0x00033B00, 379, "33ad99064a1dd6c9af61a4554cb5258cc3f42e58b721bb80ec6698a4875f4ac8"),
    (0x000410A0, 629, "d18a552122c8f7858e73681bb8e52b4fba5560e0e02abf045b20e8ced4a8c676"),
    # Unchanged dependencies whose complete selector bodies were inspected.
    (0x0034FEDF, 150, "c7c7f9180d052ab62b3a19f5cd8dff64c02feba04c1072d5b66b46f72d968cf8"),
    (0x0035055A, 145, "4a89089d7b8088677548578d0b3a8ca5d8f7083a83fde3d81d4a83639cc848ca"),
    # Additional byte/float storage views; complete ABI remains unverified.
    (0x000B1CC0, 166, "9ddc81b16371f0d4b37f63bf7d7ebfdd012a0323c5f32d0b5d4bc62fbc5e0ac9"),
    (0x000EDDD0, 196, "9690e482426c8c7ca8bb1a1de3da1ab58faf53b97fcfeb2eed84f320f3543cc6"),
    (0x00149D30, 216, "76c09961b94f5d0b05438ee279f5ca1c9d30e0b8641192dae901351b83d13545"),
    (0x0017AB50, 190, "f6c349c3f8c2eaf6e6b8932aaf6f838a0f3b35f2ea373830813523e3b6e19a07"),
    (0x0017E510, 144, "67ed35bc6cbabc973ace56c077ff5791831dcf7c8c8a5efa2b1a3aaba7a467e1"),
    (0x002AB210, 151, "06b8ea4d37eda8d80281bd37510ac475c244faf3f82dc164f80a316df8e88a70"),
    (0x002D5FF0, 174, "79b6496470940ca5bcde90501fb860d89a20e69b734b0464fe06c71a996b7349"),
    (0x00314E18, 76, "4b7ad4fa4893ae0ffc06f14731b6b428beb3915efa30e3841700ecaf0d60994d"),
    (0x0033C1E8, 346, "a107823295b58f08960b98e376583afce8fde4dd2ed7795f567db0dfd391f2cd"),
    (0x0033C0D7, 89, "28b0af26f9e8568737a9986bde99da54e4c3a499237cd169b7360fa809ef5a33"),
    (0x002EA100, ((0, 91), (92, 7), (112, 41), (156, 35), (192, 29), (256, 74), (348, 7), (356, 11), (368, 17), (388, 23), (412, 38), (452, 9), (464, 31), (508, 33), (544, 39), (584, 49), (668, 74), (760, 7), (768, 13), (784, 19), (804, 25)), "e5fc1828550e279344bbf0f85779e8d9677db7b614dc28e4ecabd2d0c12646e0"),
    (0x002D62F0, 165, "5ef676ee82d3ae3d81bad457b0bbb6d32be308656a394a870de5345c18dde6b3"),
)
WINDOWS = {
    0x002BA2FF: "8b542400f30f10120f1652040f5cca8b442440f30f11080f174804",  # next137 original float/word/SSE/storage operands
    0x002BA2DB: "8b4424408d4c24188d542408894c240089542404894424408b442404f30f10080f",  # next137 original float/word/SSE/storage operands
    0x002D46AD: "8bbc9fec00000066ff4f68",  # next137 original float/word/SSE/storage operands
    0x002D467C: "8b8fec0000008b410c8b48648b542460418948648bcf892c9a",  # next137 original float/word/SSE/storage operands
    0x002D4669: "d907d80d50533a00d9c9ded9dfe0f6c4057a45",  # next137 original float/word/SSE/storage operands
    0x002D463D: "d944246c8b8708010000d8480483c4183bddd9442458d848085edec1d944244cd808dec1",  # next137 original float/word/SSE/storage operands
    0x002D4613: "8d542428528b948ff40000008d44243c508b849ff400000052508b849fec0000008d542458e8235cfeff",  # next137 original float/word/SSE/storage operands
    0x002D4603: "8d44241450d95c24408b",  # next137 original float/word/SSE/storage operands
    0x002D45D9: "8d54245052d95c244c",  # next137 original float/word/SSE/storage operands
    0x002D4591: "56896c245cd95c2418",  # next137 original float/word/SSE/storage operands
    0x002D4564: "896c2438896c2448896c2428896c2418",  # next137 original float/word/SSE/storage operands
    0x002D4554: "8b4424608b1498f6020c",  # next137 original float/word/SSE/storage operands
    0x002D453D: "dfe0f6c441750933dbb901000000eb07bb0100000033c9",  # next137 original float/word/SSE/storage operands
    0x002D452A: "8b470c33ed3bc50f848a010000d94704d85f08",  # next137 original float/word/SSE/storage operands
    0x002D4511: "8b87f00000008b08c1e11cc1f91eba010000002bd166015068",  # next137 original float/word/SSE/storage operands
    0x002D44F8: "8b87ec0000008b08c1e11cc1f91eba010000002bd166015068",  # next137 original float/word/SSE/storage operands
    0x0009EA40: "c20800",  # next137 original float/word/SSE/storage operands
    0x0009EA36: "c7420c0000803f83c40c",  # next137 original float/word/SSE/storage operands
    0x0009EA2F: "d95908",  # next137 original float/word/SSE/storage operands
    0x0009EA1A: "d95a04",  # next137 original float/word/SSE/storage operands
    0x0009EA06: "d9188b",  # next137 original float/word/SSE/storage operands
    0x000DC7EB: "ddd8ddd8f30f52442424f30f114424",  # next137 original float/word/SSE/storage operands
    0x000DC75E: "f30f104c24248b44246cf30f10000fc6c9000f1640040f59c1f30f11000f",  # next137 original float/word/SSE/storage operands
    0x000DC729: "f30f104c24248b442464f30f10000fc6c9000f1640040f59c1f30f11000f",  # next137 original float/word/SSE/storage operands
    0x000DC664: "e85723fcff",  # next137 original float/word/SSE/storage operands
    0x000DC63F: "8d5424505256",  # next137 original float/word/SSE/storage operands
    0x000DC613: "d95c2418ddd8f30f51442418f30f114424",  # next137 original float/word/SSE/storage operands
    0x000DC4B0: "ddd8ddd8f30f52442414f30f114424",  # next137 original float/word/SSE/storage operands
    0x000DC456: "8b442428d94424248b8c244c04000089442414d95c2414d9442420d9198b94244c0400008b4c2414894a048b94244c0400008942088b",  # next137 original float/word/SSE/storage operands
    0x000DC43F: "f30f10080f1648040f59c18d442420f30f11000f1740",  # next137 original float/word/SSE/storage operands
    0x000DC42A: "d95c2414f30f104424140fc6c0008b",  # next137 original float/word/SSE/storage operands
    0x001F4722: "897e3c897e54897e6889",  # next137 original float/word/SSE/storage operands
    0x001F46F2: "8b0d103344008b1183c00c50ff52208b4e2033ff3bef89",  # next137 original float/word/SSE/storage operands
    0x001F46BD: "83c740d844241881c334010000",  # next137 original float/word/SSE/storage operands
    0x001F46B0: "898310010000",  # next137 original float/word/SSE/storage operands
    0x001F4690: "897718895f388b0d10",  # next137 original float/word/SSE/storage operands
    0x001F4658: "8b583cd80d7c",  # next137 original float/word/SSE/storage operands
    0x001F461E: "8b4620d94608d80d744f3a00897e18db00c7",  # next137 original float/word/SSE/storage operands
    0x001F4607: "6820371f00",  # next137 original float/word/SSE/storage operands
    0x001F45E8: "8b68040faf288bd5c1e20683c2045289",  # next137 original float/word/SSE/storage operands
    0x001F45AF: "d87008535557d91ed940",  # next137 original float/word/SSE/storage operands
    0x001F45A9: "894620894e1c",  # next137 original float/word/SSE/storage operands
    0x0010A5CE: "d95c2404d944243cd806d91c24",  # next137 original float/word/SSE/storage operands
    0x0010A59F: "8b4c243050668b4424360fb6d4c1e2080fb6d903d30fb6cdc1e20803d18b8ff00000000fb6c0c1e20803",  # next137 original float/word/SSE/storage operands
    0x0010A572: "395e2472058b4610eb038d4610",  # next137 original float/word/SSE/storage operands
    0x0010A4FA: "395e2472058b4610eb038d46108b5608d9442414d84604",  # next137 original float/word/SSE/storage operands
    0x0010A441: "8d54241c52ff50088b44241c8b4c242089442414894c2410",  # next137 original float/word/SSE/storage operands
    0x00316530: "515355568bf18d5e0857",  # next147 original operand/call/storage evidence
    0x00316565: "8b3d7c6338005668446331008d860007000050ffd7",  # next147 original operand/call/storage evidence
    0x0031657A: "6a008d862007000050ff15ec633800",  # next147 original operand/call/storage evidence
    0x00316589: "5668c46131008d864807000050ffd7",  # next147 original operand/call/storage evidence
    0x00316598: "8d442410506a05ff1588633800",  # next147 original operand/call/storage evidence
    0x003165A5: "6a016a00ff742418bf98fe32005056682465310057ff158c633800",  # next147 original operand/call/storage evidence
    0x003165C0: "57ff1578633800",  # next147 original operand/call/storage evidence
    0x003165E7: "8d86640700006a0150c700d0613100ff1584633800",  # next147 original operand/call/storage evidence
    0x0031664E: "5f5e8bc55d5b59c3",  # next147 original operand/call/storage evidence
    0x003310D8: "ff750c33db53536a105f57ff75088bf1576808054b008975f0e800d1fcff",  # next147 original operand/call/storage evidence
    0x00331113: "a1c8024b008945f4a1cc024b008945f88d45d85053535783c650565768ac044b00e8bdd0fcff",  # next147 original operand/call/storage evidence
    0x00331139: "8d45dc5053535756576898044b00e8aad0fcff",  # next147 original operand/call/storage evidence
    0x0033114C: "6a188d45d850e899d0fcff8d45d8508d8558feffff506a01e881d0fcff",  # next147 original operand/call/storage evidence
    0x00331169: "8d45f4506a018d8558feffff50ff7508ff7508576a01e860d0fcff",  # next147 original operand/call/storage evidence
    0x0033119D: "8b0dfc044b00a164643800894df48b0d00054b00894df8",  # next147 original operand/call/storage evidence
    0x003311B4: "8d4dd851535357505768ac044b008bf0e82dd0fcff",  # next147 original operand/call/storage evidence
    0x003311C9: "8d45dc5053535756576898044b00e81ad0fcff",  # next147 original operand/call/storage evidence
    0x003311DC: "6a188d45d850e809d0fcff8d45d8508d8558feffff506a01e8f1cffcff",  # next147 original operand/call/storage evidence
    0x003311F9: "8d45f4506a018d8558feffff50ff7508ff7508576a01e8d0cffcff",  # next147 original operand/call/storage evidence
    0x00342E9C: "8d9e98000000",  # next147 original operand/call/storage evidence
    0x00342F19: "8d83e8000000",  # next147 original operand/call/storage evidence
    0x00342F3E: "c74004c37c3300",  # next147 original operand/call/storage evidence
    0x00342F45: "c74008127d3300",  # next147 original operand/call/storage evidence
    0x00342F4C: "c7400c177d3300",  # next147 original operand/call/storage evidence
    0x0034CD37: "6897cc3400",  # next147 original operand/call/storage evidence
    0x0034CD58: "c783d801000080970600",  # next147 original operand/call/storage evidence
    0x0034CD62: "a18c643800",  # next147 original operand/call/storage evidence
    0x0034CD67: "8b00",  # next147 original operand/call/storage evidence
    0x0034CD6D: "8983dc010000",  # next147 original operand/call/storage evidence
    0x0034D747: "c780500200000bd63400",  # next147 original operand/call/storage evidence
    0x0034D834: "681ad73400",  # next147 original operand/call/storage evidence
    0x0034D85B: "6884d03400",  # next147 original operand/call/storage evidence
    0x0034DA4E: "c7058000f0fe3e0f3b00",  # next147 original operand/call/storage evidence
    0x0034DADB: "b810003000",  # next147 original operand/call/storage evidence
    0x0034DAE6: "a34001f0fe",  # next147 original operand/call/storage evidence
    0x0034DAEB: "a33c01f0fe",  # next147 original operand/call/storage evidence
    0x0035F909: "c70680f23500",  # next147 original operand/call/storage evidence
    0x0035F90F: "c74604a0f33500",  # next147 original operand/call/storage evidence
    0x0035F916: "c7460880f63500",  # next147 original operand/call/storage evidence
    0x0035F91D: "c7460ca0f63500",  # next147 original operand/call/storage evidence
    0x0035F924: "c7461040f73500",  # next147 original operand/call/storage evidence
    0x0035F92B: "c7461400f73500",  # next147 original operand/call/storage evidence
    0x0035FED8: "c705384b4100b0fb3500",  # next147 original operand/call/storage evidence
    0x0035FEE2: "c705104b410070fc3500",  # next147 original operand/call/storage evidence
    0x0035FEED: "c705384b410010fa3500",  # next147 original operand/call/storage evidence
    0x0035FEF7: "c705104b4100e0fa3500",  # next147 original operand/call/storage evidence
    0x0035FF02: "c705384b410010fe3500",  # next147 original operand/call/storage evidence
    0x0035FF0C: "c705104b410060fe3500",  # next147 original operand/call/storage evidence
    0x0035FF22: "c7051c4b410010fa3500",  # next147 original operand/call/storage evidence
    0x0035FF2C: "c705284b4100e0fa3500",  # next147 original operand/call/storage evidence
    0x0036FFE2: "c7400400002100",  # next147 original operand/call/storage evidence
    0x0037006C: "b939000000",  # next147 original operand/call/storage evidence
    0x00370073: "bf98dd3700",  # next147 original operand/call/storage evidence
    0x00370078: "f3a5",  # next147 original operand/call/storage evidence
    0x0037007A: "8b8dd8000000",  # next147 original operand/call/storage evidence
    0x00370080: "890db8df3700",  # next147 original operand/call/storage evidence
    0x00370095: "c70060022000",  # next147 original operand/call/storage evidence
    0x0037013D: "c780f000000088020800",  # next147 original operand/call/storage evidence
    0x00379183: "c783f4070000ffc32800",  # next147 original operand/call/storage evidence
    0x003791D1: "8b83f4070000",  # next147 original operand/call/storage evidence
    0x003791D7: "898680084000",  # next147 original operand/call/storage evidence
    0x00379207: "8986800b4000",  # next147 original operand/call/storage evidence
    0x003792EF: "8d8680094000",  # next147 original operand/call/storage evidence
    0x00379327: "8b8624031000",  # next147 original operand/call/storage evidence
    0x0037932D: "8986a0094000",  # next147 original operand/call/storage evidence
    0x0037933D: "898654074000",  # next147 original operand/call/storage evidence
    0x0037F659: "68ee203800",  # next147 original operand/call/storage evidence
    0x0037F6A3: "68362e3800",  # next147 original operand/call/storage evidence
    0x0034F3C3: "8d460c50566865f13400578bcbe868eeffff",  # original guest callback/import DWORD values
    0x0034F3AF: "6865f1340083c72b578bcbe87eeeffff",  # original guest callback/import DWORD values
    0x0034F37D: "a18c6438008b0089462c",  # original guest callback/import DWORD values
    0x0034F369: "c7462455f13400",  # original guest callback/import DWORD values
    0x0031C890: "8d470c6a0150c700b0c73100ff1584633800",  # original guest callback/import DWORD values
    0x0031C837: "6a016a00ff7508bef8fd3200505768e5c6310056ff158c633800",  # original guest callback/import DWORD values
    0x0031C81A: "5768f6c631008d471c50ff157c633800",  # original guest callback/import DWORD values
    0x00345268: "5756568d830009000050e8c9abcdff",  # original DWORD callback/data address representation
    0x00345259: "5756568d83f008000050e8d8abcdff",  # original DWORD callback/data address representation
    0x0034524A: "5756568d83d808000050e8e7abcdff",  # original DWORD callback/data address representation
    0x00345233: "bf6a513400576a045e56568d83c808000050e8f6abcdff",  # original DWORD callback/data address representation
    0x00345224: "c7836402000068743800e80daccdff",  # original DWORD callback/data address representation
    0x00345209: "686a513400",  # original DWORD callback/data address representation
    0x0033844D: "c7400899833300",  # original DWORD callback/data address representation
    0x00338446: "c74004127d3300",  # original DWORD callback/data address representation
    0x00338440: "c7006d833300",  # original DWORD callback/data address representation
    0x00338431: "c706fe833300",  # original DWORD callback/data address representation
    0x001EA424: "5150a358994600e8b0a4ffff",  # 0x001E48E0 caller/output/branch contract
    0x001E48EF: "8d54241c528d542414526800000080",  # 0x001E48E0 caller/output/branch contract
    0x001E4913: "8974241c8974242c897c24208b0850ff510c",  # 0x001E48E0 caller/output/branch contract
    0x001E4929: "8b44241c8b088d542410526a048d5424145250ff5110",  # 0x001E48E0 caller/output/branch contract
    0x001E4949: "8a44242084c053b301",  # 0x001E48E0 caller/output/branch contract
    0x001E4975: "8d542420528d542428526800000080685875400050ff510c",  # 0x001E48E0 caller/output/branch contract
    0x001E4991: "8b4424208b088d542424526a345550ff5110837c242434",  # 0x001E48E0 caller/output/branch contract
    0x001E49AA: "8b7d0c89750c8d75348bcde8b63905003bc7752d807d0083897d0c",  # 0x001E48E0 caller/output/branch contract
    0x001E49C7: "8b442418394504751b8b4424103b4508751285c0740e55e88d000000",  # 0x001E48E0 caller/output/branch contract
    0x001E49ED: "8b4424208b0850ff510c84db742a",  # 0x001E48E0 caller/output/branch contract
    0x001E4A1E: "8b542410895508",  # 0x001E48E0 caller/output/branch contract
    0x001E4A3F: "8b460483c60485c075eb",  # 0x001E48E0 caller/output/branch contract
    0x001E4A5F: "c20800",  # 0x001E48E0 caller/output/branch contract

    0x000A42D0: "8b460883ec085355578d7e0833ed",  # initial object load and fixed eight-byte frame
    0x000A42EF: "578d4c2410bbe8ad0e0451895c24148b1050ff5228",  # first query uses S-8
    0x000A431B: "57558d542414528d54241c52c744241c56bda2f8895c24208b0850ff5124",  # first fallback reverses request word pointers
    0x000A4350: "578d4c2414bb7f14b5e451895c24188b1050ff5228",  # second query uses S-4
    0x000A437C: "57558d542418528d54241852c744242020e9f11e895c241c8b0850ff5124",  # second fallback word writes and arguments
    0x000A43B1: "578d4c2414bbe16b7aeb51895c24188b1050ff5228",  # third query uses S-4
    0x000A43DD: "57558d542418528d54241852c7442420c29ac3e2895c241c8b0850ff5124",  # third fallback word writes and arguments
    0x000A4412: "578d4c2414bb9cbe161151895c24188b1050ff5228",  # fourth query uses S-4
    0x000A443E: "57558d542418528d54241852c7442420a9f9ed1b895c241c8b0850ff5124",  # fourth fallback word writes and arguments
    0x000A4462: "8d44241050c7442414b0c39607e8fc320000",  # subsequent helper reuses S-4

    0x002EBEA0: "85c07414",  # zero request still performs RET read
    0x002EBEAB: "f7d803c483c0048500948b0050c3",  # small request probe and return relocation
    0x002EBEB9: "518d4c240881e9001000002d",  # save ECX and first page decrement
    0x002EBEC4: "2d0010000085013d0010000073ec",  # remaining count, probe and loop comparison
    0x002EBED2: "2bc88bc485018be18b088b400450c3",  # final probe operand, ECX restore and RET
    0x002C254C: "0fbf780c8945fc8bc783c00383e0fce840990200",  # signed WORD count, DWORD rounding and helper call
    0x002C2560: "8bcf8bd1c1e90233c08bdc8bfbf3ab8bca83e103f3aa",  # post-allocation ESP alias and exact REP zero length
    0x0033FB3A: "397b10894510897d0c73128bc783c00383e0fce84ec3faff8b45108bd4",  # unsigned capacity branch, rounded request, postCALL reload and ESP alias
    0x002A6450: "83ec20",  # 32-byte opaque allocation
    0x002A6465: "8d4c240851894424088b0656ff5040",  # returned DWORD spill and output-address argument
    0x002A6474: "8b5424088b076a006a048d4c2414515789542420ff5014",  # vtable base before frame copy, slot read afterward
    0x002A649C: "6a006a028d54240c5257ff5114",  # two-byte word operation argument
    0x002A64A9: "33db66395c2404765b",  # unsigned memory WORD bound
    0x002A64B3: "8b068d4c24180fb7eb515556c744242800000000c744242c00000000c744243000000000ff502c",  # captured base, exact three zero words, then slot load
    0x002A64F7: "6a006a0c8d4c24245157ff501443663b5c240872a7",  # 12-byte argument, full counter increment and WORD compare
    0x00376DB3: "c7401cd0e93600",  # raw code-address-valued DWORD without guessed prototype
    0x00376DD1: "a188dd3700",  # existing device pointer global
    0x00376DE0: "8b90c8170000",  # device byte displacement rather than scaled word offset
    0x0021912F: "d9fadddbddd8ddd8d95c2400",  # FSQRT and x87-to-m32 boundary
    0x0021913B: "f30f10442400f30f53c08b44242cf30f10080fc6c0000f1648040f59c1",  # RCPSS broadcast and packed XYZ lanes
    0x0021917E: "d81d80503a008944240cdfe0f6c4417a10",  # threshold comparison parity branch
    0x002191EF: "894204d944240c8b442400d8ca894208dee9ddd9d912",  # first output order and unrounded FST X
    0x00219231: "d944242cd80ad912d944242cd84a04d95204d944242cd84a08d95208",  # three FST-retained normalized components
    0x0021924D: "d9c2d84c2408d9c2d84c2410dee9d95c2400",  # second cross retained x87 operands
    0x00219267: "d8c9894108d9cb",  # second output begins at plus8
    0x0021927A: "8b54242cd84c240c895104",  # second output plus4 write
    0x0021928B: "dee9d9c9ddd8d911",  # second X remains extended after FST
    0x002192B3: "f30f52442400",  # second norm RSQRTSS
    0x002192BF: "d944242cd809d919d944242cd84904d95904d944242cd84908d95908",  # final m32 reloads and stores
    0x003A5080: "da1b7c3f",  # exact binary32 basis threshold
    0x0036F3A6: "c74008800b2000",  # literal command DWORD
    0x0036F3F5: "391df8df3700",  # verified existing render-state word
    0x0037091C: "a3f8df3700",  # setter corroborates the same DWORD
    0x00291480: "8b4c240883f9ff75158b4c24040fbf410c8b49088d04c08d4441eec20800",  # representative callback's index=-1 path, EAX result and RET8
    0x00291E80: "8b54240883faff75128b4424040fbf480c8b50088d448afcc20800",  # second callback's index=-1 path only; other paths remain partial
    0x00291068: "0fbf460c",  # signed 16-bit word load
    0x0029107B: "db442414d84e10",  # FILD then raw m32 multiply
    0x0029108B: "d85c2418dfe0f6c441750f",  # ordered lower comparison
    0x002910A9: "d8d9dfe0ddd8f6c4410f8ab3000000",  # upper comparison including unordered
    0x002910B8: "d9442418894c2408d87610d95c2414f30f2c442414",  # division m32 spill then CVTTSS2SI
    0x0029110C: "db442418c744241800000000d84e10d8e2def9d95c240cddd8",  # index+1 FILD, denominator, ratio spill
    0x00291125: "f30f1044240cf30f5f442418f30f5d44241cf30f11442410",  # MAXSS and MINSS operand order
    0x0029114C: "8b4c24245789018b1656ff521c",  # out1 write before second vtable reload
    0x00291172: "8b4c2424d94424048b542420890189025e83c40cc21400",  # endpoint store order and RET20
    0x0023451F: "8d542404528d54240c528b542414505256ff5120d95c240c",  # five caller pushes, virtual slot20, ST0 spill
    0x00391208: "801e290060102900",  # representative slot1c and slot20 targets
    0x0039123C: "8014290060102900",  # second representative table
    0x002C4520: "83ec54",  # 84-byte local allocation
    0x002C4571: "8b4e2c33c08944242489442434894424448b4618894424508d44240c8d54241850897c2410895c244c896c2450894c24588954241489742418",  # exact context initialization offsets and embedded pointer
    0x002C45BA: "8d4c240c51",  # first conditional context argument
    0x002C45D1: "8d44240c50",  # second conditional context argument
    0x002B55AF: "8b45088b1150ff520c",  # forward original context DWORD
    0x002B55BD: "c20400",  # helper RET4
    0x002BCCD9: "8b5c2410",  # third stack-word capture
    0x002BCD03: "53ff500c",  # forward third word to callback
    0x002BCD26: "c20c00",  # helper RET12
    0x00376199: "c74008500a1000",  # immediate DWORD at command word two
    0x003761B8: "c7402800002100",  # immediate DWORD at command word ten
    0x0036F25D: "8d780cb90c000000be50b33700f3a5",  # destination, 12-DWORD count, guest source and REP MOVSD
    0x0036F2E5: "c78624010000500a1000",  # ESI=command base+3C, literal at base+160
    0x00379DC7: "be0800080089b4882c05000089b4883005000089b4883405000089b48838050000",  # immediate and four DWORD stores
    0x0037A04A: "c7071b000c00",  # record word two literal
    0x0037A38A: "c784880400700000e02f00",  # final literal DWORD
    0x002B497F: "c7400c70110100",  # literal DWORD, not a data-symbol address
    0x002B4A6B: "f30f114c2410",  # low four bytes of reused scalar slot
    0x002B4D5A: "d980b40000006a14dd5c24148b4c24148b542418898810010000",  # raw m32fp, PUSH, m64fp spill and low copy
    0x002B4D77: "899014010000",  # high DWORD of m64fp copied to object
    0x002B4ED7: "c74424100000803f",  # overwrite only the low DWORD
    0x002B4FE1: "568d4c241451",  # PUSH then address the same reused slot
    0x002B502F: "c7815801000040e20100",  # literal DWORD, not a code-label address
    0x002D9E7B: "8b57048b4f0c",  # raw dimension and guest address DWORDs
    0x002D9E94: "8b47088d1c818bc183e0f02bc8c1f9022bce03ca",  # stride, alignment and pre-helper count
    0x002D9EB1: "e81affffff",  # unresolved EDI/ESI-input helper
    0x002D9EC4: "d9e1d81fdfe0f6c4050f8bae000000",  # outer FCOMP unordered path
    0x002D9ED3: "f30f5345f0f30f1145f8d945f8",  # RCPSS low-lane spill/reload
    0x002D9EE3: "d9e08b4704d95df8",  # FCHS and m32fp boundary
    0x002D9F06: "d81fdfe0f6c441755bd84df8",  # ordered greater then FMUL
    0x002D9F18: "d95decf30f104dec",  # factor m32fp store before broadcast
    0x002D9F30: "0f28130f1843300f5900",  # destination read before packed multiplication
    0x002D9F41: "0f58c283c0100f2943f083e9047fdd",  # ADDPS, 16-byte write, SUB/JG
    0x002D9F56: "8b4010d80cb08b5df4d80490d91c90",  # scalar guest words, FMUL/FADD/final m32fp
    0x000F4538: "b9070000008d7c2418f3ab",  # seven DWORD zero extent and packet base
    0x000F4548: "895c2420",  # incoming EAX/EBX word in packet
    0x000F4567: "c744241c11000000",  # first tag at packet word one
    0x000F458A: "8d4c241851",  # first packet LEA/PUSH
    0x000F459D: "8b50108b480c89542438894c24108b4814895424148b5018",  # four source-field read order and first snapshots
    0x000F45BA: "c744241c12000000",  # second tag at same packet offset
    0x000F45C2: "894c24388b48088954240c",  # remaining raw snapshots
    0x000F45D4: "8d4c241851",  # second packet LEA/PUSH
    0x000F45E1: "5f",  # POP EDI changes stack coordinate base
    0x000F45E4: "d944240c8b542410d84424348b068bce895610d9",  # sum, raw store, then m32 store
    0x000F4606: "c744241813000000",  # third tag after POP
    0x000F4618: "8d4c241451",  # third packet LEA/PUSH
    0x000F4627: "d94424108b54240cd84424088b068bce89560cd95e10",  # second sum, raw store, then m32 store
    0x000F4649: "c744241814000000",  # fourth tag
    0x000F465B: "8d4c241451",  # fourth packet LEA/PUSH
    0x000F466A: "d944240c8b16d84424348bced95e0cd9442410d8442408d95e10",  # both final sums and m32 stores
    0x002BC343: "8b44244c8b48148b91b4000000",  # indirect address and retained raw word source
    0x002BC363: "89542414",  # raw retained word at T+14
    0x002BC377: "c744242c00000000",  # fourth delta word zero before SIMD
    0x002BC38F: "f30f10080f1648048b542418f30f10120f1652040f5cca8b442410f30f11080f174804",  # three-lane target/source loads and subtraction
    0x002BC3AA: "f30f11080f174804",  # three delta word stores
    0x002BC3B2: "8d44242050e8e4a1ffff",  # delta address and normalizer call
    0x002BC3CF: "d95c2410",  # callback result m32 spill
    0x002BC3D3: "807e64087d6f",  # signed first status branch
    0x002BC3EC: "d9442428c744244400000000d8c9d95c2438",  # first delta load, zero fourth, multiply, m32 store
    0x002BC419: "8b4c24588b5424148d442440505189542448c744244c00000000c744245000000000c7",  # first target argument and raw/zero buffer
    0x002BC448: "807d64087d6d",  # signed second status branch
    0x002BC459: "d94424208d54244052d8c957c744245400000000d95c2448",  # first second-path multiply, zero fourth, m32 store
    0x002BC48C: "8b54245c8b4424148d4c2430515289442438c744243c00000000c744244000000000c744244400000000",  # second target argument and buffer reuse
    0x002B3BBB: "c20800",  # callee RET 8
    0x002B3C5A: "c20800",  # callee RET 8
    0x002B65E5: "c20400",  # normalizer RET 4 early path
    0x002B662E: "c20400",  # normalizer RET 4 normal path
    0x001572BC: "8d54244852c744244cb43f3a00",  # contiguous object address/first DWORD
    0x001572C9: "c744245cffffffffc74424500600000089742458897c2454",  # trailing object words
    0x001572E1: "e8ea700a00",  # original object call
    0x00157380: "d94610d85c241cdfe0f6c441",  # ordered maximum comparison
    0x0015738E: "8b4e10894c241c",  # raw maximum copy
    0x001573D2: "d82d784f3a00",  # 1.0 - input
    0x001573DE: "d80dfc513a00d80538503a00d95c2420",  # exact factors and binary32 spill
    0x001573F0: "d9442420d84e08d89700010000dfe0f6c441",  # extended product comparison
    0x00157408: "d99f00010000",  # successful binary32 output
    0x0015741B: "d981f0000000c744242c0000003fd8402cd95c2428",  # Z sum, half constant, m32 spill
    0x00157430: "d981ec000000",  # Y input
    0x0015743A: "d84028d95c2424",  # Y add and m32 spill
    0x00157441: "d981e8000000",  # X input
    0x0015744B: "d84024",  # X add
    0x0015745A: "d95c243c",  # X m32 spill
    0x00157462: "f30f1044242c0fc6c000",  # half broadcast
    0x00157470: "f30f10080f1648040f59c1",  # known lane mapping and MULPS order
    0x0015747F: "f30f11000f174004",  # low/high lanes to first three scratch words
    0x0015749C: "8b4c244889088b4c2434895004894808",  # staged X,Y,Z word copies
    0x0015751E: "8b4c241c898fd4000000",  # maximum word to object +d4
    0x003A4F78: "0000803f",  # binary32 one
    0x003A51FC: "cdcccc3e",  # binary32 coefficient
    0x003A5038: "9a99193f",  # binary32 coefficient

    0x003526E9: "558bec",  # EBP entry frame
    0x003527BA: "33c0",  # EAX high half established before partial writes
    0x003527C1: "660fb64d0d8a6d0c",  # incoming bytes one/zero into CL/CH
    0x003527D0: "4150660fb6c58ae1",  # increment, first push, swap low word to AX
    0x003527D8: "8bcb5052e86fe4ffff",  # object ECX; second/first pushes and call

    0x00125D4A: "d9402c8b4c2450d8612c",  # Z difference, second base from stack
    0x00125D54: "d94028d86128",  # Y difference
    0x00125D5A: "d94024d86124",  # X difference
    0x00125D60: "d95c24248b442424d9c9d95c241c",  # round X and Z, preserve X word
    0x00125D6E: "89442428",  # X output word
    0x00125D76: "d95c24208b5424208954242c",  # round and copy Y word
    0x00125D82: "8d54242889442430",  # contiguous vector address and Z output word
    0x00125D8D: "5250",  # PUSH vector address and next argument
    0x00125D9D: "56e86dd2f8ff",  # third argument push and original call

    0x0031546E: "8b415083c03c8b0083f801",  # guest pointer +0x50; state +0x3c
    0x0031547B: "bac0f43200",  # default matrix base
    0x00315482: "8b51488b12",  # two DWORD pointer loads
    0x0031548C: "b8a8cc3100",  # default scalar base
    0x00315493: "8b414883c004",  # reload guest word and add four
    0x00315499: "d94224",  # FLD m32fp matrix +0x24
    0x0031549F: "d94220",  # FLD m32fp matrix +0x20
    0x003154A7: "d9421c",  # FLD m32fp matrix +0x1c
    0x003154DB: "d94230",  # FLD m32fp matrix +0x30
    0x003154E1: "d9422c",  # FLD m32fp matrix +0x2c
    0x003154EB: "d84a28",  # FMUL m32fp matrix +0x28

    0x00232BEC: "f30f53e0",  # RCPSS initial input
    0x00232BFB: "0f2f0d70d838000f828d000000",  # COMISS / JB including unordered
    0x00232C80: "f30f59c3f30f58cff30f53c9f30f59c1",  # small-path operand order
    0x00232D09: "f30f59e3f30f58eff30f101500d93800f30f53edf30f59ec",  # large-path order
    0x00232D29: "0f54c20f56c7f30f5cc5",  # sign, OR half-pi, subtract
    0x0038D870: "000080bf",  # -1.0f compare threshold
    0x0038D8C0: "db0fc93f",  # half-pi result word
    0x0038D960: "f6b0bbbd1fa6b2bfb1c9bcc2d1364e410fcfa33f349f0c40c237da4043a4e141",  # scalar constants
    0x0023D285: "d9442464",  # FLD incoming fourth DWORD
    0x0023D28C: "d81d884f3a00",  # compare against original zero constant
    0x0023D2AA: "f6c405",  # C0/C2 status predicate
    0x0023D2B9: "7a0b",  # parity includes unordered path
    0x0023D2C6: "8b4424645055e87ffeffff",  # unchanged argument word to helper
    0x0023D33D: "89442464",  # reuse incoming slot for heap pointer
    0x003A4F88: "00000000",  # binary32 zero

    0x002243A6: "8954242c",  # full candidate DWORD stored before alias read
    0x002243B1: "8d44242c",  # alias candidate slot
    0x002243B7: "894c24188d442418",  # alternative root slot and alias
    0x002243BF: "8b003b455cc644242c01",  # snapshot, compare, low-byte write
    0x0022444A: "8b6810c644242c00",  # use prewrite snapshot then clear low byte
    0x002244FB: "8a442424",  # return flag byte after two register pops

    0x003550E5: "88551b",  # fifth incoming word byte 3
    0x003551CF: "20451c",  # AND sixth incoming word low byte, AL=0
    0x00355368: "c6451c10ff751c",  # MOV low byte 0x10 then PUSH full word
    0x002DD4E0: "dd8424c8000000",  # FLD incoming pair 10/11
    0x002DD4EB: "dd8424c0000000",  # FLD incoming pair 8/9
    0x002DD525: "dd542418",  # FST QWORD scratch
    0x002DD54A: "dd5c2418",  # FSTP QWORD scratch
    0x002DD55A: "8b74241c8b6c2418",  # high/low word snapshots
    0x002DD569: "5655",  # high then low pushed
    0x002DD57B: "5655",  # repeated word pair
    0x002DD5D1: "89ac24c000000089b424c4000000",  # save low/high pair 8/9
    0x002DD5EB: "89ac24c800000089b424cc000000",  # save low/high pair 10/11
    0x002DD635: "8970045e8928",  # output high then low

    0x001FEDB6: "8b6c2410",  # save original second argument pointer in EBP
    0x001FEDE3: "88442418",  # AL to byte of reused second argument
    0x001FEE0A: "88442418",
    0x001FEE3D: "88442418",
    0x001FEE72: "88442418",
    0x001FEEA6: "88442418",
    0x001FEEDA: "88442418",
    0x001FEF12: "c644241801",
    0x001FEF1E: "8d44241c50",  # address of flag word after push 3
    0x001FEF4E: "c644241801",
    0x001FEF55: "8d4c241c51",  # same flag address after push 1
    0x001FEF7A: "8a442438",  # reload flag while eight pushed DWORDs remain
    0x001FEF9B: "b001",  # AL only; no stack write

    0x002BBA79: "dd442408dd5424088b44240c8b54240889817c010000899178010000",  # FLD/FST then high/low stores
    0x002BBB89: "dd5c24088b4424088b54240c898180010000899184010000",  # FSTP then low/high stores

    0x0033E262: "0fb64513500fb64512500fb64511500fb6451050",  # MOVZX/PUSH bytes 3,2,1,0
    0x0033E27D: "e8affcffff83c41c",  # formatter call; caller removes seven DWORDs

    0x0034BD4E: "8b7d08",  # EDI retains original pointer word
    0x0034BD77: "8b5610",  # read DWORD into EDX
    0x0034BD8A: "895508",  # reuse incoming argument slot with entire EDX
    0x0034BE3C: "807d087f",  # compare only low byte of that DWORD

    0x00208B6D: "b00184c0",  # update AL only, then test it
    0x00208B98: "b001",  # final AL-only success

    0x001F3FE7: "c644243400",  # incoming second word byte=0
    0x001F401D: "8a542432",  # byte 2 of helper-written first word
    0x001F403F: "8a5c2437",  # byte 3 after EBX save
    0x001F4062: "c644243801",  # same flag byte after EBX save
    0x001F40D8: "8a442434",  # return flag in AL
    0x00209F5C: "8844241c",  # third incoming slot partial write
    0x00209F81: "8844241c",  # success byte
    0x0020A058: "8d44242050",  # address of flag slot after push
    0x0020A079: "8a442438",  # reload byte with 28 argument bytes pending
    0x00271128: "8a442414",  # incoming pointer word low byte
    0x00271133: "8806",  # write byte to object +0x80
    0x00271159: "8a4c2414",  # same pointer word low byte
    0x00271164: "880e",  # write byte to object +0x8c

    0x0020009C: "8844241c",  # incoming third word byte
    0x0020014B: "c644241c01",  # byte success
    0x00200160: "8d742430",  # implicit ESI aliases flag slot
    0x00200173: "8a442430",  # reload AL
    0x00201E9C: "8844241c",  # incoming third word byte
    0x00201F54: "c644241c01",  # byte success
    0x00201F83: "8d4c241c51",  # pass address of whole slot
    0x00201F9F: "8a44241c",  # return low byte
    0x00208A8C: "8844241c",  # initial result byte
    0x00208B1C: "c644241c01",  # byte success
    0x00208B31: "8d742430",  # implicit helper alias
    0x00208B44: "8a442430",  # reload result

    0x00223F19: "88442414",  # partial incoming DWORD byte store
    0x00223F25: "d8590cdfe0f6c4057a0a",  # FCOMP/TEST/JP unordered-inclusive right
    0x00223F33: "88442414",  # low byte=1
    0x00223F3E: "88442414",  # low byte=0
    0x00223F87: "d85d00dfe0f6c4057a24",  # reversed FCOMP unordered-inclusive found
    0x00223F91: "8b5424145552",  # forward complete incoming word
    0x002B6184: "f30f101a0f165a04",  # input vector [x,0,y,z]
    0x002B61A8: "0f59c4",  # first multiply destination/source order
    0x002B61BB: "0f59cd0fc6dbff0f58c10f59d30f58c2",  # ordered mul/add/mul/add
    0x002B61CF: "f30f11000f174004",  # compact output to scratch
    0x002B626C: "8d0411",  # source is input + row byte offset
    0x002B627F: "f30f101a0f165a04",  # same input lane layout
    0x002B62B6: "0f59cd0fc6dbff0f58c10f59d30f58c2",  # ordered arithmetic
    0x002B62CA: "f30f11000f174004",  # scratch-before-output

    0x0012BB51: "f30f10000f1640040f59c1",  # [x,0,y,z] times broadcast
    0x0012BB60: "f30f11000f174004",  # compact low/high lanes
    0x0012BBDE: "f30f51442408",  # SQRTSS
    0x0012BBF2: "f30f52442408",  # RSQRTSS
    0x00233B19: "0f10080f1012",  # two full vector loads
    0x00233B43: "0fc6e401",  # first reduction shuffle
    0x00233B53: "0f2fc77307",  # COMISS/JAE; unordered flips sign
    0x00233B58: "0f571500d93800",  # XOR original sign mask
    0x00233B6E: "f30f10d00fc6c001f30f58c2",  # final pair1 + pair0
    0x00233B7A: "f30f52c00fc6c0000f59c8",  # RSQRT broadcast multiply
    0x0038D900: "00000080000000800000008000000080",  # four sign bits

    0x0010A2F5: "837d0806",  # CMP DWORD +8,6
    0x0010A317: "837d24087205",  # unsigned capacity below 8
    0x0010A31D: "8b4510",  # allocated guest DWORD address
    0x0010A322: "8d4510",  # inline address
    0x0010A3A9: "837d24087205",  # repeat after helper
    0x0010A3AF: "8b4510",  # allocated address again
    0x0010A3C9: "668b4424360fb6d4c1e2080fb6e903d5c1e2080fb6cd03d1",  # bytes 3,0,1
    0x0010A3E5: "0fb6c0c1e20803d0",  # append byte 2
    0x0010ABEA: "c7470800000000",  # DWORD flag zero
    0x0010AC05: "c7470806000000",  # DWORD flag six
    0x0010AC31: "837f2408",  # capacity unsigned comparison
    0x0010AC45: "72058b4710eb038d4710",  # allocated DWORD or inline address

    0x001F8CAF: "8844244c",  # low byte at entry ESP+8 after 0x44 frame/save bytes
    0x001F8CD3: "8844244c",  # replace the same byte with AL=1
    0x001F8D2D: "807c244c01",  # compare only that byte
    0x001F8D48: "8d4c244c51",  # forward address of reused incoming slot
    0x001F8D69: "8a44245c",  # read same byte with 16 argument bytes pending
    0x00202F5C: "8844241c",  # low byte at entry ESP+12 after four saved registers
    0x00202F80: "c644241c01",  # set same byte
    0x00202F95: "8d742430",  # ESI points at same slot after 20 argument bytes
    0x00202FA8: "8a442430",  # reload status byte after helper
    0x00203024: "8a442444",  # same slot with 40 argument bytes pending

    0x000D1C4B: "f30f53c9",  # rcpss xmm1, xmm1
    0x00232F79: "f30f53ff",  # rcpss xmm7, xmm7
    0x00232FF5: "f30f53f6",  # rcpss xmm6, xmm6
    0x00233392: "f30f53c0",  # rcpss xmm0, xmm0
    0x002BA85E: "0f59c0",  # mulps xmm0, xmm0
    0x002BA861: "0fc6c880",  # shufps xmm1, xmm0, 0x80
    0x002BA865: "0f58c8",  # addps xmm1, xmm0
    0x002BA868: "0fc6c903",  # shufps xmm1, xmm1, 3
    0x002BA86C: "f30f58c8",  # addss xmm1, xmm0
    0x002BA87E: "f30f51442410",  # sqrtss xmm0, dword ptr [esp + 0x10]
    0x002CDD2A: "0f59c0",  # mulps xmm0, xmm0
    0x002CDD2D: "0fc6c880",  # shufps xmm1, xmm0, 0x80
    0x002CDD31: "0f58c8",  # addps xmm1, xmm0
    0x002CDD34: "0fc6c903",  # shufps xmm1, xmm1, 3
    0x002CDD38: "f30f58c8",  # addss xmm1, xmm0
    0x00210C00: "c644240801",  # low byte only, incoming DWORD
    0x00210C1A: "884c240c",  # same byte after extra register save
    0x00210C2F: "8b4c24085351",  # read and forward entire original word
    0x002D3536: "f30f10080f164804",  # MOVSS/MOVHPS: lanes 0,2,3
    0x002D3542: "f30f10120f165204",  # corresponding subtrahend lanes
    0x002D354A: "0f5cca",  # SUBPS second helper output minus first
    0x002D3551: "f30f11080f174804",  # store exactly three floats
    0x000EDF8C: "8844241c",  # store AL in reused input byte
    0x000EDFDC: "8a4c2454",  # load only that byte after two calls
    0x00141633: "8a442428",  # read first incoming byte
    0x0014163E: "88442414",  # copy it into helper input storage
    0x0020041C: "8844241c",  # store AL in reused third input slot
    0x00200445: "8a442430",  # read that byte after call arguments
    0x00202B0C: "8844241c",  # corresponding store in related routine
    0x00202B35: "8a442430",  # corresponding byte read
    0x001B183C: "8d54241052",  # address and push entry ESP+4 after saves
    0x001B1854: "c20400",  # RET 4 on growth path
    0x001B1887: "c20400",  # RET 4 on other path
    0x001A6835: "518bc4c700000000008d040e8bcf",  # caller writes one zero DWORD
    0x001A6843: "e8c8af0000",  # caller CALL 0x001b1810
    0x000757A3: "8b45108b08894dec",  # helper reads one DWORD through third argument
    0x0034D444: "8db3e60100008d7df8a566a5",  # LEAs, MOVSD+MOVSW into six local bytes
    0x0034D46E: "8d7df8a566a5",  # optional replacement of those same bytes
    0x0034D47E: "66f3a7742b",  # compare three words; branch on equality
    0x0034D48A: "8b45f8a3a800f0fe0fb745fca3ac00f0fe",  # DWORD then MOVZX WORD stores
    0x0034D49B: "8d75f88dbbe0010000a58bcb66a5",  # copy six local bytes back
    0x00351BBB: "c645f803",  # selector byte=3
    0x00351C66: "c645f806",  # selector byte=6
    0x00351BEF: "ff75f8",  # original argument reads full DWORD; high bytes unknown
    0x0034FF2E: "3a5510",  # ultimate consumer compares only selector byte
    0x0035057D: "ff750c",  # forwarding path 1
    0x003505A7: "ff750c",  # forwarding fallback path 2
    0x003505D0: "ff750c",  # forwarding fallback path 3
    0x0003318D: "f30f10000f1640040f28d00f59c0",  # MOVSS/MOVHPS and packed square
    0x000331B9: "f30f52c90fc6c9000f59d1f30f11100f175004",  # RSQRT/broadcast/MULPS/stores
    0x00033BAC: "f30f10000f1640040f28d00f59c0",  # same observed memory-lane load
    0x00033BD8: "f30f52c90fc6c9000f59d1f30f11100f175004",  # same observed packed stores
    0x00033C53: "d81d7c4f3a00dfe0f6c4057a14",  # x87 compare; unordered branch
    0x000410F3: "f30f51442410",  # SQRTSS memory operand
    0x00041138: "f30f1044240c0fc6c000",  # MOVSS and reciprocal-root broadcast
    0x00041146: "f30f10080f1648040f59c1",  # MOVSS/MOVHPS and packed scale
    0x003A4018: "acc5a737",  # exact binary32 normalization threshold
    0x003A5150: "00008028",  # exact binary32 first 0x410a0 threshold
    0x003A4FFC: "00000034",  # exact binary32 second threshold
    0x000B1CDF: "8b00",  # mov eax, dword ptr [eax]
    0x000B1CE1: "89442414",  # mov dword ptr [esp + 0x14], eax
    0x000B1CE5: "8a4c2415",  # mov cl, byte ptr [esp + 0x15]
    0x000B1CE9: "8a5c2416",  # mov bl, byte ptr [esp + 0x16]
    0x000B1CED: "8ad0",  # mov dl, al
    0x000B1CF2: "88483a",  # mov byte ptr [eax + 0x3a], cl
    0x000B1CF5: "885038",  # mov byte ptr [eax + 0x38], dl
    0x000B1CF8: "885839",  # mov byte ptr [eax + 0x39], bl
    0x000EDDEC: "8844241c",  # mov byte ptr [esp + 0x1c], al
    0x000EDE10: "c644241c01",  # mov byte ptr [esp + 0x1c], 1
    0x000EDE86: "8a442458",  # mov al, byte ptr [esp + 0x58]
    0x00149D46: "c644241001",  # mov byte ptr [esp + 0x10], 1
    0x00149D4D: "c644241000",  # mov byte ptr [esp + 0x10], 0
    0x00149DC9: "c644241400",  # mov byte ptr [esp + 0x14], 0
    0x00149DF6: "8a442410",  # mov al, byte ptr [esp + 0x10]
    0x0017AB50: "8a442404",  # mov al, byte ptr [esp + 4]
    0x0017AB5C: "8b6c240c",  # mov ebp, dword ptr [esp + 0xc]
    0x0017AB94: "e8a7260000",  # call 0x17d240
    0x0017ABD0: "8a08",  # mov cl, byte ptr [eax]
    0x0017E524: "c7442424286b6e4e",  # mov dword ptr [esp + 0x24], 0x4e6e6b28
    0x0017E573: "d8542424",  # fcom dword ptr [esp + 0x24]
    0x0017E57E: "d95c2424",  # fstp dword ptr [esp + 0x24]
    0x002AB21A: "c744240400000000",  # mov dword ptr [esp + 4], 0
    0x002AB226: "8d4c2424",  # lea ecx, [esp + 0x24]
    0x002AB245: "f30f5f44240c",  # maxss xmm0, dword ptr [esp + 0xc]
    0x002AB269: "d95c2418",  # fstp dword ptr [esp + 0x18]
    0x002AB27E: "f30f5f442414",  # maxss xmm0, dword ptr [esp + 0x14]
    0x002AB29E: "d9442404",  # fld dword ptr [esp + 4]
    0x002D6063: "8d7c240c",  # lea edi, [esp + 0xc]
    0x002D6068: "8d7c240c",  # lea edi, [esp + 0xc]
    0x002D6074: "d9442408",  # fld dword ptr [esp + 8]
    0x002D607B: "d844240c",  # fadd dword ptr [esp + 0xc]
    0x002D6085: "d91c24",  # fstp dword ptr [esp]
    0x00314E1D: "8b4e50",  # mov ecx, dword ptr [esi + 0x50]
    0x00314E20: "8b5104",  # mov edx, dword ptr [ecx + 4]
    0x00314E23: "8b4648",  # mov eax, dword ptr [esi + 0x48]
    0x00314E26: "8b00",  # mov eax, dword ptr [eax]
    0x00314E28: "8916",  # mov dword ptr [esi], edx
    0x00314E33: "83c004",  # add eax, 4
    0x00314E39: "83793c01",  # cmp dword ptr [ecx + 0x3c], 1
    0x00314E41: "d820",  # fsub dword ptr [eax]
    0x0033C230: "8d450b",  # lea eax, [ebp + 0xb]
    0x0033C2CD: "8d4d0b",  # lea ecx, [ebp + 0xb]
    0x0033C31E: "8a450b",  # mov al, byte ptr [ebp + 0xb]
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    blob = args.xbe.read_bytes()
    sections = xbe_sections(blob)  # Requires the pinned whole-XBE SHA-256.
    for entry, size, digest in BODIES:
        spans = ((0, size),) if isinstance(size, int) else size
        body = b"".join(mapped_span(blob, sections, entry + offset, length)
                        for offset, length in spans)
        actual = hashlib.sha256(body).hexdigest()
        embedded, conflict = read_body_digest(
            source_path(args.root, f"0x{entry:08x}").read_text(encoding="utf-8"))
        if actual != digest or conflict or embedded is None or embedded.lower() != digest:
            parser.exit(1, f"FAIL original/source body provenance at {entry:#010x}\n")
    for address, expected in WINDOWS.items():
        expected = bytes.fromhex(expected)
        if mapped_span(blob, sections, address, len(expected)) != expected:
            parser.exit(1, f"FAIL instruction window at {address:#010x}\n")
    print(f"PASS {len(BODIES)} original/source body digests and {len(WINDOWS)} instruction windows")
    print("Byte/storage facts only; full interfaces, guest mapping and behavior remain unverified.")


if __name__ == "__main__":
    main()
