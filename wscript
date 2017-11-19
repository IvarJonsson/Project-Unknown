# Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

def build(bld):

	bld.CryEngineModule(
		target        = 'CryGameSDK',
		vs_filter     = 'Projects/GameSDK',		
		file_list     = 'gamedllsdk.waf_files', 

		durango_features  = 'durango_title_id',
		pch           = 'StdAfx.cpp',
		includes      = [ '.',  Path('Code/CryEngine/CryAction'), ],

		win_lib       = [ 'shell32', 'Gdi32' ],

		use_module       = [ 'CryLobby', 'CryPerceptionSystem' ],

		durango_file_list   = 'gamedllsdk_durango.waf_files',
		durango_lib         = [ 'etwplus', 'ixmlhttprequest2', 'Ws2_32', 'uuid' ],
		durango_cxxflags    = [ '/EHsc', '/ZW' ],
	)
